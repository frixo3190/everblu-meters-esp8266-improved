# Raccordement GPIO — ESP32 DevKitC + CC1101 (montage frixo)

Ce document décrit le câblage utilisé pour lire le compteur d'eau Itron EverBlu
Cyble Enhanced RF avec un **ESP32 NodeMCU / DevKitC (ESP32-WROOM-32, CP2102)** et
un module **CC1101 433 MHz**.

Il correspond exactement à la configuration `compteur-eau.yaml` de ce dépôt.

> [!WARNING]
> **Changement cassant v3.0.0 : GDO2 est obligatoire par défaut.**
> La gestion matérielle du FIFO du CC1101 passe désormais par **GDO2**. Ce montage
> câble donc GDO2 sur **GPIO27** et définit `gdo2_pin: GPIO27`.
> Sans ce câblage, la config ESPHome est **refusée** à la validation et le
> firmware MQTT **ne compile pas** (`#error` dans `src/core/cc1101.cpp`).
> Pour revenir à l'ancien polling SPI (non recommandé, moins fiable en TX),
> voir la section [Désactiver GDO2 (opt-out)](#désactiver-gdo2-opt-out).

## Vue d'ensemble

```text
        CC1101 433 MHz                        ESP32 DevKitC
   +---------------------+                +---------------------+
   | VCC   ----------------> 3V3 (3.3 V)  |                     |
   | GND   ----------------> GND          |                     |
   | SCK   ----------------> GPIO18       |                     |
   | MISO  ----------------> GPIO19       |   ESP32-WROOM-32    |
   | MOSI  ----------------> GPIO23       |   (CP2102 en USB)   |
   | CSN   ----------------> GPIO25       |                     |
   | GDO0  ----------------> GPIO4        |                     |
   | GDO2  ----------------> GPIO27       |                     |
   +---------------------+                +---------------------+
```

## Tableau de raccordement

<!-- markdownlint-disable MD060 -->

| **Broche CC1101** | **Fonction**                              | **GPIO ESP32** | **Repère DevKitC** | **Remarque**                                          |
| ----------------- | ----------------------------------------- | -------------- | ------------------ | ----------------------------------------------------- |
| **VCC**           | Alimentation                              | 3V3            | `3V3`              | **3,3 V uniquement** — jamais 5 V                     |
| **GND**           | Masse                                     | GND            | `GND`              | Masse commune                                         |
| **SCK**           | Horloge SPI                               | GPIO18         | `D18`              | Bus SPI matériel                                      |
| **MISO**          | Données SPI (ESP32 ← CC1101)              | GPIO19         | `D19`              | Parfois nommé `GDO1` sur le module                    |
| **MOSI**          | Données SPI (ESP32 → CC1101)              | GPIO23         | `D23`              | Bus SPI matériel                                      |
| **CSN / CS**      | Chip select                               | GPIO25         | `25`               | Évite GPIO5 (broche de strapping)                     |
| **GDO0**          | Data ready / interruption                 | GPIO4          | `D4`               | Configurable (`gdo0_pin`)                             |
| **GDO2**          | Seuil FIFO (FIFO matériel)                | GPIO27         | `27`               | **Obligatoire** depuis la v3.0.0 (`gdo2_pin`)         |

<!-- markdownlint-enable MD060 -->

Les deux formats de carte DevKitC (30 et 38 broches) exposent tous les GPIO
nécessaires : 4, 18, 19, 23, 25 et 27.

## Repérage sur la carte

Sur les DevKitC, les GPIO sont sérigraphiés avec des noms différents selon les
modèles :

- `D18`, `D19`, `D23` sur la colonne de droite (broches SPI matérielles).
- `25` et `27` sur la colonne de gauche.
- `D4` sur la colonne de droite, près de `D2` et `D15`.
- `3V3` et `GND` existent en plusieurs exemplaires : n'importe lequel convient.

Si ton module CC1101 est un modèle 8 broches, la broche `GDO1` (si présente) est
la même ligne que `MISO` : elle se raccorde à GPIO19.

## Alimentation et précautions

- **Le CC1101 est un module 3,3 V.** Une alimentation en 5 V l'endommage
  immédiatement.
- Le régulateur du DevKitC alimente sans problème le CC1101 (quelques dizaines de
  mA en pointe).
- Garder les fils **courts** (idéalement < 15 cm), surtout SCK/MOSI/MISO.
- Ajouter si possible un condensateur de **100 nF** entre `3V3` et `GND` au plus
  près du module CC1101 pour absorber les pics de courant.
- Une **antenne 433 MHz** doit être montée (SMA ou fil calibré). Sans antenne,
  les lectures échouent ou sont très instables.
- Placer le montage à **2-5 m du compteur** : trop près, le récepteur sature
  (message `NEAR-FIELD SATURATION DETECTED`) ; trop loin, le signal est trop
  faible.

## Correspondance dans la configuration

### ESPHome (`compteur-eau.yaml`)

```yaml
spi:
  id: main_bus
  clk_pin: GPIO18
  mosi_pin: GPIO23
  miso_pin: GPIO19

everblu_meter:
  spi_id: main_bus
  cs_pin: GPIO25
  gdo0_pin: GPIO4
  gdo2_pin: GPIO27
```

### Firmware MQTT (`include/private.h`)

Les valeurs par défaut de `include/private.example.h` sont celles de l'ESP8266
(`GDO0 5`, `GDO2 4`). Pour ce montage ESP32, remplacer par :

```cpp
#define GDO0 4
#define GDO2 27
```

Le bus SPI ESP32 (18/19/23) est celui du cœur Arduino : il n'y a rien d'autre à
définir côté firmware MQTT.

## Vérifier que GDO2 est bien pris en compte

Après le flash, la configuration est correcte si :

- les logs ne contiennent **aucun** `GDO2 still HIGH - check wiring` ;
- le rapport diagnostic (`Rapport diagnostic` dans Home Assistant) affiche un
  niveau GDO2 cohérent et les registres CC1101 (PARTNUM/VERSION) non nuls ;
- les lectures aboutissent (ACK puis trame de données).

Le capteur **Timeouts GDO2** (`gdo2_timeouts`) compte les blocages du seuil FIFO :
il doit rester à 0. Une valeur qui augmente signale un GDO2 mal câblé ou un
problème de FIFO.

## Désactiver GDO2 (opt-out)

Ce n'est **pas recommandé** : GDO2 évite les `TXFIFO_UNDERFLOW` pendant
l'interrogation. Si tu ne peux vraiment pas câbler GDO2, il faut explicitement
revenir au polling SPI :

ESPHome :

```yaml
everblu_meter:
  # gdo2_pin: GPIO27        # retirer cette ligne
  disable_gdo2_fifo_management: true
```

Firmware MQTT (`include/private.h`) :

```cpp
// #define GDO2 27
#define DISABLE_GDO2_FIFO_MANAGEMENT
```

`gdo2_pin` et `disable_gdo2_fifo_management: true` sont **mutuellement
exclusifs** : ESPHome refuse la configuration si les deux sont présents.

## Contraintes de choix des GPIO

À respecter si tu dois déplacer une broche :

- **Ne pas utiliser GPIO6 à GPIO11** : connectés à la mémoire flash SPI.
- **Éviter les broches de strapping** au démarrage : GPIO0, GPIO2, GPIO5,
  GPIO12 et GPIO15. Elles peuvent empêcher le boot si elles sont tirées au
  mauvais niveau.
- **GDO2 utilise un pull-up interne** : choisir un GPIO qui en possède un, donc
  **pas GPIO34 à GPIO39** (entrées seules, sans pull-up). GPIO26 ou GPIO27
  conviennent.
- **GDO0 et GDO2 doivent être deux GPIO différents.**
- GPIO25 est un bon choix pour CS : ce n'est pas une broche de strapping, contrairement
  à GPIO5 souvent utilisée par défaut sur d'autres cartes.

## Dépannage rapide

| **Symptôme**                                        | **Piste à vérifier**                                                        |
| --------------------------------------------------- | --------------------------------------------------------------------------- |
| `CC1101 not detected` / PARTNUM ou VERSION à `0x00` | Alimentation 3,3 V, GND commun, CS sur GPIO25, soudures SPI                 |
| `GDO2 still HIGH - check wiring`                    | GDO2 non raccordé ou raccordé à une mauvaise broche                         |
| `No ACK frame received`                             | Distance au compteur, antenne, orientation, fenêtre de réveil du compteur   |
| `CRC failed` avec RSSI très fort (> −50 dBm)        | Montage trop proche : éloigner à 2-5 m                                      |
| RSSI faible (< −90 dBm)                             | Rapprocher le montage, vérifier l'antenne et le 433 MHz                     |
| Le flash USB ne démarre pas                         | Maintenir **BOOT** au début du flash, vérifier le pilote CP2102             |

## Variante ESP8266 (référence projet)

Pour mémoire, les valeurs par défaut du projet sur ESP8266 (D1 Mini / HUZZAH) :

| **CC1101** | **ESP8266 GPIO** | **D1 Mini** |
| ---------- | ---------------- | ----------- |
| SCK        | GPIO14           | D5          |
| MISO       | GPIO12           | D6          |
| MOSI       | GPIO13           | D7          |
| CSN        | GPIO15           | D8          |
| GDO0       | GPIO5            | D1          |
| GDO2       | GPIO4            | D2          |

Ne pas confondre : malgré le nom commercial « NodeMCU », la carte utilisée ici
est un **ESP32** et doit être compilée avec l'environnement `esp32dev` (ou la
board ESPHome `esp32dev`), pas `nodemcuv2` qui désigne un ESP8266.

## Références

- `compteur-eau.yaml` — configuration ESPHome de ce montage.
- `include/private.example.h` — configuration du firmware MQTT.
- `README.md` — section *Hardware* et *Connections (ESP32/ESP8266 to CC1101)*.
- `docs/GDO2_FIFO_MANAGEMENT.md` — détail du rôle de GDO2.
