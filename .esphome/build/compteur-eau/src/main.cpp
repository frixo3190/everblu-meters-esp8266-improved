// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
alignas(logger::Logger) static unsigned char logger__logger_logger_id__pstorage[sizeof(logger::Logger)];
static logger::Logger *const logger_logger_id = reinterpret_cast<logger::Logger *>(logger__logger_logger_id__pstorage);
#ifndef __PICOLIBC__
using std::isnan;
#endif
using std::min;
using std::max;
#include <new>
using namespace time;
using namespace sensor;
using namespace text_sensor;
using namespace binary_sensor;
using namespace button;
alignas(web_server_base::WebServerBase) static unsigned char web_server_base__web_server_base_webserverbase_id__pstorage[sizeof(web_server_base::WebServerBase)];
static web_server_base::WebServerBase *const web_server_base_webserverbase_id = reinterpret_cast<web_server_base::WebServerBase *>(web_server_base__web_server_base_webserverbase_id__pstorage);
alignas(captive_portal::CaptivePortal) static unsigned char captive_portal__captive_portal_captiveportal_id__pstorage[sizeof(captive_portal::CaptivePortal)];
static captive_portal::CaptivePortal *const captive_portal_captiveportal_id = reinterpret_cast<captive_portal::CaptivePortal *>(captive_portal__captive_portal_captiveportal_id__pstorage);
alignas(wifi::WiFiComponent) static unsigned char wifi__wifi_wificomponent_id__pstorage[sizeof(wifi::WiFiComponent)];
static wifi::WiFiComponent *const wifi_wificomponent_id = reinterpret_cast<wifi::WiFiComponent *>(wifi__wifi_wificomponent_id__pstorage);
alignas(mdns::MDNSComponent) static unsigned char mdns__mdns_mdnscomponent_id__pstorage[sizeof(mdns::MDNSComponent)];
static mdns::MDNSComponent *const mdns_mdnscomponent_id = reinterpret_cast<mdns::MDNSComponent *>(mdns__mdns_mdnscomponent_id__pstorage);
alignas(network::NetworkComponent) static unsigned char network__network_networkcomponent_id__pstorage[sizeof(network::NetworkComponent)];
static network::NetworkComponent *const network_networkcomponent_id = reinterpret_cast<network::NetworkComponent *>(network__network_networkcomponent_id__pstorage);
alignas(esphome::ESPHomeOTAComponent) static unsigned char esphome__esphome_esphomeotacomponent_id__pstorage[sizeof(esphome::ESPHomeOTAComponent)];
static esphome::ESPHomeOTAComponent *const esphome_esphomeotacomponent_id = reinterpret_cast<esphome::ESPHomeOTAComponent *>(esphome__esphome_esphomeotacomponent_id__pstorage);
alignas(web_server::WebServerOTAComponent) static unsigned char web_server__web_server_webserverotacomponent_id__pstorage[sizeof(web_server::WebServerOTAComponent)];
static web_server::WebServerOTAComponent *const web_server_webserverotacomponent_id = reinterpret_cast<web_server::WebServerOTAComponent *>(web_server__web_server_webserverotacomponent_id__pstorage);
alignas(preferences::IntervalSyncer) static unsigned char preferences__preferences_intervalsyncer_id__pstorage[sizeof(preferences::IntervalSyncer)];
static preferences::IntervalSyncer *const preferences_intervalsyncer_id = reinterpret_cast<preferences::IntervalSyncer *>(preferences__preferences_intervalsyncer_id__pstorage);
alignas(safe_mode::SafeModeComponent) static unsigned char safe_mode__safe_mode_safemodecomponent_id__pstorage[sizeof(safe_mode::SafeModeComponent)];
static safe_mode::SafeModeComponent *const safe_mode_safemodecomponent_id = reinterpret_cast<safe_mode::SafeModeComponent *>(safe_mode__safe_mode_safemodecomponent_id__pstorage);
alignas(api::APIServer) static unsigned char api__api_apiserver_id__pstorage[sizeof(api::APIServer)];
static api::APIServer *const api_apiserver_id = reinterpret_cast<api::APIServer *>(api__api_apiserver_id__pstorage);
using namespace api;
using namespace spi;
alignas(spi::SPIComponent) static unsigned char spi__main_bus__pstorage[sizeof(spi::SPIComponent)];
static spi::SPIComponent *const main_bus = reinterpret_cast<spi::SPIComponent *>(spi__main_bus__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id_3__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id_3 = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id_3__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id_2__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id_2 = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id_2__pstorage);
alignas(homeassistant::HomeassistantTime) static unsigned char homeassistant__ha_time__pstorage[sizeof(homeassistant::HomeassistantTime)];
static homeassistant::HomeassistantTime *const ha_time = reinterpret_cast<homeassistant::HomeassistantTime *>(homeassistant__ha_time__pstorage);
alignas(everblu_meter::EverbluMeterComponent) static unsigned char everblu_meter__compteur_eau__pstorage[sizeof(everblu_meter::EverbluMeterComponent)];
static everblu_meter::EverbluMeterComponent *const compteur_eau = reinterpret_cast<everblu_meter::EverbluMeterComponent *>(everblu_meter__compteur_eau__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id_4__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id_4 = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id_4__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id_5__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id_5 = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id_5__pstorage);
alignas(esp32::ESP32InternalGPIOPin) static unsigned char esp32__esp32_esp32internalgpiopin_id_6__pstorage[sizeof(esp32::ESP32InternalGPIOPin)];
static esp32::ESP32InternalGPIOPin *const esp32_esp32internalgpiopin_id_6 = reinterpret_cast<esp32::ESP32InternalGPIOPin *>(esp32__esp32_esp32internalgpiopin_id_6__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_3__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_3 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_3__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_2__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_2 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_2__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_4__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_4 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_4__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_5__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_5 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_5__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_6__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_6 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_6__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_7__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_7 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_7__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_7__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_7 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_7__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_8__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_8 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_8__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_8__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_8 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_8__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_9__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_9 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_9__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_10__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_10 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_10__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_14__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_14 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_14__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_11__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_11 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_11__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_12__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_12 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_12__pstorage);
alignas(sensor::Sensor) static unsigned char sensor__sensor_sensor_id_13__pstorage[sizeof(sensor::Sensor)];
static sensor::Sensor *const sensor_sensor_id_13 = reinterpret_cast<sensor::Sensor *>(sensor__sensor_sensor_id_13__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_9__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_9 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_9__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_10__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_10 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_10__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_11__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_11 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_11__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_12__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_12 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_12__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_13__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_13 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_13__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_14__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_14 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_14__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_2__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_2 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_2__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_3__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_3 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_3__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_4__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_4 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_4__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_5__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_5 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_5__pstorage);
alignas(text_sensor::TextSensor) static unsigned char text_sensor__text_sensor_textsensor_id_6__pstorage[sizeof(text_sensor::TextSensor)];
static text_sensor::TextSensor *const text_sensor_textsensor_id_6 = reinterpret_cast<text_sensor::TextSensor *>(text_sensor__text_sensor_textsensor_id_6__pstorage);
alignas(binary_sensor::BinarySensor) static unsigned char binary_sensor__binary_sensor_binarysensor_id__pstorage[sizeof(binary_sensor::BinarySensor)];
static binary_sensor::BinarySensor *const binary_sensor_binarysensor_id = reinterpret_cast<binary_sensor::BinarySensor *>(binary_sensor__binary_sensor_binarysensor_id__pstorage);
alignas(binary_sensor::BinarySensor) static unsigned char binary_sensor__binary_sensor_binarysensor_id_2__pstorage[sizeof(binary_sensor::BinarySensor)];
static binary_sensor::BinarySensor *const binary_sensor_binarysensor_id_2 = reinterpret_cast<binary_sensor::BinarySensor *>(binary_sensor__binary_sensor_binarysensor_id_2__pstorage);
alignas(everblu_meter::EverbluMeterTriggerButton) static unsigned char everblu_meter__everblu_meter_everblumetertriggerbutton_id__pstorage[sizeof(everblu_meter::EverbluMeterTriggerButton)];
static everblu_meter::EverbluMeterTriggerButton *const everblu_meter_everblumetertriggerbutton_id = reinterpret_cast<everblu_meter::EverbluMeterTriggerButton *>(everblu_meter__everblu_meter_everblumetertriggerbutton_id__pstorage);
alignas(everblu_meter::EverbluMeterTriggerButton) static unsigned char everblu_meter__everblu_meter_everblumetertriggerbutton_id_2__pstorage[sizeof(everblu_meter::EverbluMeterTriggerButton)];
static everblu_meter::EverbluMeterTriggerButton *const everblu_meter_everblumetertriggerbutton_id_2 = reinterpret_cast<everblu_meter::EverbluMeterTriggerButton *>(everblu_meter__everblu_meter_everblumetertriggerbutton_id_2__pstorage);
alignas(everblu_meter::EverbluMeterTriggerButton) static unsigned char everblu_meter__everblu_meter_everblumetertriggerbutton_id_3__pstorage[sizeof(everblu_meter::EverbluMeterTriggerButton)];
static everblu_meter::EverbluMeterTriggerButton *const everblu_meter_everblumetertriggerbutton_id_3 = reinterpret_cast<everblu_meter::EverbluMeterTriggerButton *>(everblu_meter__everblu_meter_everblumetertriggerbutton_id_3__pstorage);
alignas(everblu_meter::EverbluMeterTriggerButton) static unsigned char everblu_meter__everblu_meter_everblumetertriggerbutton_id_4__pstorage[sizeof(everblu_meter::EverbluMeterTriggerButton)];
static everblu_meter::EverbluMeterTriggerButton *const everblu_meter_everblumetertriggerbutton_id_4 = reinterpret_cast<everblu_meter::EverbluMeterTriggerButton *>(everblu_meter__everblu_meter_everblumetertriggerbutton_id_4__pstorage);
alignas(everblu_meter::EverbluMeterTriggerButton) static unsigned char everblu_meter__everblu_meter_everblumetertriggerbutton_id_5__pstorage[sizeof(everblu_meter::EverbluMeterTriggerButton)];
static everblu_meter::EverbluMeterTriggerButton *const everblu_meter_everblumetertriggerbutton_id_5 = reinterpret_cast<everblu_meter::EverbluMeterTriggerButton *>(everblu_meter__everblu_meter_everblumetertriggerbutton_id_5__pstorage);
#undef yield
#define yield() esphome::yield()
#undef millis
#define millis() esphome::millis()
#undef micros
#define micros() esphome::micros()
#undef delay
#define delay(x) esphome::delay(x)
#undef delayMicroseconds
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
static constexpr size_t ESPHOME_LOOPING_COMPONENT_COUNT = \
  (1 * HasLoopOverride<logger::Logger>::value) + \
  (1 * HasLoopOverride<captive_portal::CaptivePortal>::value) + \
  (1 * HasLoopOverride<wifi::WiFiComponent>::value) + \
  (1 * HasLoopOverride<mdns::MDNSComponent>::value) + \
  (1 * HasLoopOverride<network::NetworkComponent>::value) + \
  (1 * HasLoopOverride<esphome::ESPHomeOTAComponent>::value) + \
  (1 * HasLoopOverride<preferences::IntervalSyncer>::value) + \
  (1 * HasLoopOverride<safe_mode::SafeModeComponent>::value) + \
  (1 * HasLoopOverride<web_server::WebServerOTAComponent>::value) + \
  (1 * HasLoopOverride<api::APIServer>::value) + \
  (1 * HasLoopOverride<spi::SPIComponent>::value) + \
  (1 * HasLoopOverride<homeassistant::HomeassistantTime>::value) + \
  (1 * HasLoopOverride<everblu_meter::EverbluMeterComponent>::value);
namespace esphome {
static const char COMP_SRC_TABLE_STR_0[] PROGMEM = "logger";
static const char COMP_SRC_TABLE_STR_1[] PROGMEM = "captive_portal";
static const char COMP_SRC_TABLE_STR_2[] PROGMEM = "wifi";
static const char COMP_SRC_TABLE_STR_3[] PROGMEM = "mdns";
static const char COMP_SRC_TABLE_STR_4[] PROGMEM = "network";
static const char COMP_SRC_TABLE_STR_5[] PROGMEM = "esphome.ota";
static const char COMP_SRC_TABLE_STR_6[] PROGMEM = "preferences";
static const char COMP_SRC_TABLE_STR_7[] PROGMEM = "safe_mode";
static const char COMP_SRC_TABLE_STR_8[] PROGMEM = "web_server.ota";
static const char COMP_SRC_TABLE_STR_9[] PROGMEM = "api";
static const char COMP_SRC_TABLE_STR_10[] PROGMEM = "spi";
static const char COMP_SRC_TABLE_STR_11[] PROGMEM = "homeassistant.time";
static const char COMP_SRC_TABLE_STR_12[] PROGMEM = "everblu_meter";
static const char *const COMP_SRC_TABLE[] PROGMEM = {COMP_SRC_TABLE_STR_0, COMP_SRC_TABLE_STR_1, COMP_SRC_TABLE_STR_2, COMP_SRC_TABLE_STR_3, COMP_SRC_TABLE_STR_4, COMP_SRC_TABLE_STR_5, COMP_SRC_TABLE_STR_6, COMP_SRC_TABLE_STR_7, COMP_SRC_TABLE_STR_8, COMP_SRC_TABLE_STR_9, COMP_SRC_TABLE_STR_10, COMP_SRC_TABLE_STR_11, COMP_SRC_TABLE_STR_12};
const LogString *component_source_lookup(uint8_t index) {
  if (index == 0 || index > 13) return LOG_STR("<unknown>");
  return reinterpret_cast<const LogString *>(
    progmem_read_ptr(&COMP_SRC_TABLE[index - 1]));
}
}  // namespace esphome
namespace esphome {
static const char ENTITY_DC_TABLE_STR_0[] PROGMEM = "water";
static const char ENTITY_DC_TABLE_STR_1[] PROGMEM = "signal_strength";
static const char ENTITY_DC_TABLE_STR_2[] PROGMEM = "timestamp";
static const char ENTITY_DC_TABLE_STR_3[] PROGMEM = "running";
static const char ENTITY_DC_TABLE_STR_4[] PROGMEM = "connectivity";
static const char ENTITY_DC_TABLE_EMPTY[] PROGMEM = "";
static const char *const ENTITY_DC_TABLE[] PROGMEM = {ENTITY_DC_TABLE_STR_0, ENTITY_DC_TABLE_STR_1, ENTITY_DC_TABLE_STR_2, ENTITY_DC_TABLE_STR_3, ENTITY_DC_TABLE_STR_4};
const char *entity_device_class_lookup(uint8_t index) {
  if (index == 0 || index > 5) return ENTITY_DC_TABLE_EMPTY;
  return progmem_read_ptr(&ENTITY_DC_TABLE[index - 1]);
}

static const char *const ENTITY_UOM_TABLE[] PROGMEM = {"L", "months", "dBm", "%", "kHz", "MHz"};
const char *entity_uom_lookup(uint8_t index) {
  if (index == 0 || index > 6) return "";
  return progmem_read_ptr(&ENTITY_UOM_TABLE[index - 1]);
}

static const char ENTITY_ICON_TABLE_STR_0[] PROGMEM = "mdi:water";
static const char ENTITY_ICON_TABLE_STR_1[] PROGMEM = "mdi:battery-clock";
static const char ENTITY_ICON_TABLE_STR_2[] PROGMEM = "mdi:counter";
static const char ENTITY_ICON_TABLE_STR_3[] PROGMEM = "mdi:signal";
static const char ENTITY_ICON_TABLE_STR_4[] PROGMEM = "mdi:signal-cellular-3";
static const char ENTITY_ICON_TABLE_STR_5[] PROGMEM = "mdi:signal-cellular-outline";
static const char ENTITY_ICON_TABLE_STR_6[] PROGMEM = "mdi:clock-start";
static const char ENTITY_ICON_TABLE_STR_7[] PROGMEM = "mdi:clock-end";
static const char ENTITY_ICON_TABLE_STR_8[] PROGMEM = "mdi:check-circle";
static const char ENTITY_ICON_TABLE_STR_9[] PROGMEM = "mdi:alert-circle";
static const char ENTITY_ICON_TABLE_STR_10[] PROGMEM = "mdi:pulse";
static const char ENTITY_ICON_TABLE_STR_11[] PROGMEM = "mdi:sine-wave";
static const char ENTITY_ICON_TABLE_STR_12[] PROGMEM = "mdi:radio-tower";
static const char ENTITY_ICON_TABLE_STR_13[] PROGMEM = "mdi:information";
static const char ENTITY_ICON_TABLE_STR_14[] PROGMEM = "mdi:alert";
static const char ENTITY_ICON_TABLE_STR_15[] PROGMEM = "mdi:clock";
static const char ENTITY_ICON_TABLE_STR_16[] PROGMEM = "mdi:history";
static const char ENTITY_ICON_TABLE_STR_17[] PROGMEM = "mdi:tag";
static const char ENTITY_ICON_TABLE_STR_18[] PROGMEM = "mdi:barcode";
static const char ENTITY_ICON_TABLE_STR_19[] PROGMEM = "mdi:calendar";
static const char ENTITY_ICON_TABLE_STR_20[] PROGMEM = "mdi:clock-digital";
static const char ENTITY_ICON_TABLE_STR_21[] PROGMEM = "mdi:calendar-clock";
static const char ENTITY_ICON_TABLE_STR_22[] PROGMEM = "mdi:clock-outline";
static const char ENTITY_ICON_TABLE_STR_23[] PROGMEM = "mdi:radar";
static const char ENTITY_ICON_TABLE_STR_24[] PROGMEM = "mdi:restore";
static const char ENTITY_ICON_TABLE_STR_25[] PROGMEM = "mdi:stop-circle-outline";
static const char ENTITY_ICON_TABLE_STR_26[] PROGMEM = "mdi:clipboard-text-search-outline";
static const char ENTITY_ICON_TABLE_EMPTY[] PROGMEM = "";
static const char *const ENTITY_ICON_TABLE[] PROGMEM = {ENTITY_ICON_TABLE_STR_0, ENTITY_ICON_TABLE_STR_1, ENTITY_ICON_TABLE_STR_2, ENTITY_ICON_TABLE_STR_3, ENTITY_ICON_TABLE_STR_4, ENTITY_ICON_TABLE_STR_5, ENTITY_ICON_TABLE_STR_6, ENTITY_ICON_TABLE_STR_7, ENTITY_ICON_TABLE_STR_8, ENTITY_ICON_TABLE_STR_9, ENTITY_ICON_TABLE_STR_10, ENTITY_ICON_TABLE_STR_11, ENTITY_ICON_TABLE_STR_12, ENTITY_ICON_TABLE_STR_13, ENTITY_ICON_TABLE_STR_14, ENTITY_ICON_TABLE_STR_15, ENTITY_ICON_TABLE_STR_16, ENTITY_ICON_TABLE_STR_17, ENTITY_ICON_TABLE_STR_18, ENTITY_ICON_TABLE_STR_19, ENTITY_ICON_TABLE_STR_20, ENTITY_ICON_TABLE_STR_21, ENTITY_ICON_TABLE_STR_22, ENTITY_ICON_TABLE_STR_23, ENTITY_ICON_TABLE_STR_24, ENTITY_ICON_TABLE_STR_25, ENTITY_ICON_TABLE_STR_26};
const char *entity_icon_lookup(uint8_t index) {
  if (index == 0 || index > 27) return ENTITY_ICON_TABLE_EMPTY;
  return progmem_read_ptr(&ENTITY_ICON_TABLE[index - 1]);
}

}  // namespace esphome
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // logger:
  //   level: INFO
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   task_log_buffer_size: 768
  //   hardware_uart: UART0
  //   logs: {}
  //   runtime_tag_levels: false
  new(logger_logger_id) logger::Logger(115200);
  logger_logger_id->create_pthread_key();
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level(ESPHOME_LOG_LEVEL_INFO);
  // network:
  //   id: network_networkcomponent_id
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esphome:
  //   name: compteur-eau
  //   friendly_name: Compteur Eau
  //   min_version: 2026.6.5
  //   build_path: build\compteur-eau
  //   platformio_options: {}
  //   build_flags: []
  //   environment_variables: {}
  //   includes: []
  //   includes_c: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   debug_scheduler: false
  //   areas: []
  //   devices: []
  new (&App) Application();
  App.pre_setup("compteur-eau", 12, "Compteur Eau", 12);
  App.looping_components_.init(ESPHOME_LOOPING_COMPONENT_COUNT);
  // time:
  // sensor:
  // text_sensor:
  // binary_sensor:
  // button:
  App.register_component_(logger_logger_id, 1);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  new(web_server_base_webserverbase_id) web_server_base::WebServerBase();
  web_server_base::global_web_server_base = web_server_base_webserverbase_id;
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  //   compression: gzip
  new(captive_portal_captiveportal_id) captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  App.register_component_(captive_portal_captiveportal_id, 2);
  // wifi:
  //   ap:
  //     ssid: \033[8mCompteur-Eau Fallback\033[28m
  //     password: \033[8mcompteur-eau-secours\033[28m
  //     id: wifi_wifiap_id
  //     ap_timeout: 90s
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   post_connect_roaming: true
  //   min_auth_mode: WPA2
  //   networks:
  //     - ssid: \033[8mwifi_becheau_IoT\033[28m
  //       password: \033[8mwifibecheau12denisy2\033[28m
  //       id: wifi_wifiap_id_2
  //       priority: 0
  //   use_address: compteur-eau.local
  new(wifi_wificomponent_id) wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("compteur-eau.local");
  wifi_wificomponent_id->init_sta(1);
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("wifi_becheau_IoT");
  wifi_wifiap_id_2.set_password("wifibecheau12denisy2");
  wifi_wifiap_id_2.set_priority(0);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Compteur-Eau Fallback");
  wifi_wifiap_id.set_password("compteur-eau-secours");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(90000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_min_auth_mode(wifi::WIFI_MIN_AUTH_MODE_WPA2);
  App.register_component_(wifi_wificomponent_id, 3);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  new(mdns_mdnscomponent_id) mdns::MDNSComponent();
  App.register_component_(mdns_mdnscomponent_id, 4);
  new(network_networkcomponent_id) network::NetworkComponent();
  App.register_component_(network_networkcomponent_id, 5);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: \033[8mQ8sAgsp86nr6RTGD\033[28m
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  //   allow_partition_access: false
  new(esphome_esphomeotacomponent_id) esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("Q8sAgsp86nr6RTGD");
  App.register_component_(esphome_esphomeotacomponent_id, 6);
  // ota.web_server:
  //   platform: web_server
  //   id: web_server_webserverotacomponent_id
  new(web_server_webserverotacomponent_id) web_server::WebServerOTAComponent();
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  new(preferences_intervalsyncer_id) preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  App.register_component_(preferences_intervalsyncer_id, 7);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  new(safe_mode_safemodecomponent_id) safe_mode::SafeModeComponent();
  App.register_component_(safe_mode_safemodecomponent_id, 8);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  App.register_component_(web_server_webserverotacomponent_id, 9);
  // api:
  //   encryption:
  //     key: \033[8mJLGnkwgg5bN2Zk64ViLI+fp68PdcL0AD9/xQfWTCvyw=\033[28m
  //   id: api_apiserver_id
  //   port: 6053
  //   reboot_timeout: 15min
  //   batch_delay: 100ms
  //   custom_services: false
  //   homeassistant_services: false
  //   homeassistant_states: false
  //   listen_backlog: 4
  //   max_connections: 5
  //   max_send_queue: 8
  new(api_apiserver_id) api::APIServer();
  App.register_component_(api_apiserver_id, 10);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_batch_delay(100);
  api_apiserver_id->set_listen_backlog(4);
  api_apiserver_id->set_noise_psk({36, 177, 167, 147, 8, 32, 229, 179, 118, 102, 78, 184, 86, 34, 200, 249, 250, 122, 240, 247, 92, 47, 64, 3, 247, 252, 80, 125, 100, 194, 191, 44});
  // spi:
  //   - id: main_bus
  //     clk_pin:
  //       number: 18
  //       mode:
  //         output: true
  //         input: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //       id: esp32_esp32internalgpiopin_id
  //       inverted: false
  //       ignore_pin_validation_error: false
  //       ignore_strapping_warning: false
  //       drive_strength: 20.0
  //     mosi_pin:
  //       number: 23
  //       mode:
  //         output: true
  //         input: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //       id: esp32_esp32internalgpiopin_id_2
  //       inverted: false
  //       ignore_pin_validation_error: false
  //       ignore_strapping_warning: false
  //       drive_strength: 20.0
  //     miso_pin:
  //       number: 19
  //       mode:
  //         input: true
  //         output: false
  //         open_drain: false
  //         pullup: false
  //         pulldown: false
  //       id: esp32_esp32internalgpiopin_id_3
  //       inverted: false
  //       ignore_pin_validation_error: false
  //       ignore_strapping_warning: false
  //       drive_strength: 20.0
  //     interface: any
  //     type: single
  //     interface_index: 0
  new(main_bus) spi::SPIComponent();
  App.register_component_(main_bus, 11);
  new(esp32_esp32internalgpiopin_id) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_18);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  main_bus->set_clk(esp32_esp32internalgpiopin_id);
  new(esp32_esp32internalgpiopin_id_3) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_19);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_INPUT);
  main_bus->set_miso(esp32_esp32internalgpiopin_id_3);
  new(esp32_esp32internalgpiopin_id_2) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_23);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  main_bus->set_mosi(esp32_esp32internalgpiopin_id_2);
  main_bus->set_interface(SPI2_HOST);
  main_bus->set_interface_name("SPI2_HOST");
  // esp32:
  //   board: esp32dev
  //   framework:
  //     type: arduino
  //     version: 3.3.9
  //     sdkconfig_options: {}
  //     log_level: ERROR
  //     advanced:
  //       compiler_optimization: SIZE
  //       enable_idf_experimental_features: false
  //       enable_lwip_assert: true
  //       ignore_efuse_custom_mac: false
  //       ignore_efuse_mac_crc: false
  //       sram1_as_iram: false
  //       enable_lwip_mdns_queries: true
  //       enable_lwip_bridge_interface: false
  //       enable_lwip_tcpip_core_locking: true
  //       enable_lwip_check_thread_safety: true
  //       disable_libc_locks_in_iram: true
  //       disable_vfs_support_termios: true
  //       disable_vfs_support_select: true
  //       disable_vfs_support_dir: true
  //       freertos_in_iram: false
  //       ringbuf_in_iram: false
  //       heap_in_iram: false
  //       execute_from_psram: false
  //       loop_task_stack_size: 8192
  //       enable_ota_rollback: true
  //       use_full_certificate_bundle: false
  //       include_builtin_idf_components: []
  //       enable_full_printf: false
  //       disable_debug_stubs: true
  //       disable_ocd_aware: true
  //       disable_usb_serial_jtag_secondary: true
  //       disable_dev_null_vfs: true
  //       disable_mbedtls_peer_cert: true
  //       disable_mbedtls_pkcs7: true
  //       disable_regi2c_in_iram: true
  //       adc_oneshot_in_iram: false
  //       disable_fatfs: true
  //     components: []
  //     platform_version: https:github.com/pioarduino/platform-espressif32/releases/download/55.03.39/platform-espressif32.zip
  //     source: pioarduino/framework-arduinoespressif32@https:github.com/espressif/arduino-esp32/releases/download/3.3.9/esp32-core-3.3.9.tar.xz
  //   flash_size: 4MB
  //   watchdog_timeout: 5s
  //   variant: ESP32
  //   cpu_frequency: 240MHZ
  // time.homeassistant:
  //   platform: homeassistant
  //   id: ha_time
  //   timezone: CET-1CEST,M3.5.0,M10.5.0/3
  //   update_interval: 15min
  new(ha_time) homeassistant::HomeassistantTime();
  {
  time::ParsedTimezone tz{};
  tz.std_offset_seconds = -3600;
  tz.dst_offset_seconds = -7200;
  tz.dst_start.time_seconds = 7200;
  tz.dst_start.day = 0;
  tz.dst_start.type = time::DSTRuleType::MONTH_WEEK_DAY;
  tz.dst_start.month = 3;
  tz.dst_start.week = 5;
  tz.dst_start.day_of_week = 0;
  tz.dst_end.time_seconds = 10800;
  tz.dst_end.day = 0;
  tz.dst_end.type = time::DSTRuleType::MONTH_WEEK_DAY;
  tz.dst_end.month = 10;
  tz.dst_end.week = 5;
  tz.dst_end.day_of_week = 0;
  time::set_global_tz(tz);
  }
  ha_time->set_update_interval(900000);
  App.register_component_(ha_time, 12);
  // external_components:
  //   - source:
  //       path: D:\dev\compteur_eau\ESPHOME-release
  //       type: local
  //     components:
  //       - everblu_meter
  //     refresh: 1d
  // everblu_meter:
  //   id: compteur_eau
  //   spi_id: main_bus
  //   meter_code:
  //     raw: 13-0685444-219
  //     year: 13
  //     serial: 685444
  //   meter_type: water
  //   cs_pin:
  //     number: 25
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_4
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   gdo0_pin:
  //     number: 4
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_5
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   gdo2_pin:
  //     number: 27
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_6
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   time_id: ha_time
  //   timezone_offset: 60
  //   auto_align_time: true
  //   reading_schedule: Never
  //   read_hour: 4
  //   read_minute: 0
  //   initial_read_on_boot: false
  //   request_reading_button:
  //     name: Lire le compteur maintenant
  //     disabled_by_default: false
  //     id: everblu_meter_everblumetertriggerbutton_id
  //   deep_scan_button:
  //     name: Scan frequentiel profond
  //     disabled_by_default: false
  //     id: everblu_meter_everblumetertriggerbutton_id_2
  //     icon: mdi:radar
  //     entity_category: config
  //   reset_frequency_button:
  //     name: Reinitialiser offset frequence
  //     disabled_by_default: false
  //     id: everblu_meter_everblumetertriggerbutton_id_3
  //     icon: mdi:restore
  //     entity_category: config
  //   stop_reading_button:
  //     name: Arreter la lecture
  //     disabled_by_default: false
  //     id: everblu_meter_everblumetertriggerbutton_id_4
  //     icon: mdi:stop-circle-outline
  //     entity_category: config
  //   diagnostic_report_button:
  //     name: Rapport diagnostic
  //     disabled_by_default: false
  //     id: everblu_meter_everblumetertriggerbutton_id_5
  //     icon: mdi:clipboard-text-search-outline
  //     entity_category: diagnostic
  //   volume:
  //     name: Volume compteur
  //     device_class: water
  //     state_class: total_increasing
  //     disabled_by_default: false
  //     id: sensor_sensor_id
  //     force_update: false
  //   counter:
  //     name: Compteur de lectures
  //     disabled_by_default: false
  //     id: sensor_sensor_id_2
  //     force_update: false
  //     icon: mdi:counter
  //     state_class: total_increasing
  //   battery:
  //     name: Piles compteur (mois)
  //     disabled_by_default: false
  //     id: sensor_sensor_id_3
  //     force_update: false
  //     unit_of_measurement: months
  //     icon: mdi:battery-clock
  //     accuracy_decimals: 0
  //     state_class: measurement
  //   rssi:
  //     name: RSSI compteur
  //     disabled_by_default: false
  //     id: sensor_sensor_id_4
  //     force_update: false
  //     unit_of_measurement: dBm
  //     icon: mdi:signal
  //     accuracy_decimals: 0
  //     device_class: signal_strength
  //     state_class: measurement
  //   rssi_percentage:
  //     name: RSSI pourcentage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_5
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:signal-cellular-3
  //     accuracy_decimals: 0
  //     state_class: measurement
  //   lqi:
  //     name: LQI compteur
  //     disabled_by_default: false
  //     id: sensor_sensor_id_6
  //     force_update: false
  //     icon: mdi:signal
  //     accuracy_decimals: 0
  //     state_class: measurement
  //   lqi_percentage:
  //     name: LQI pourcentage
  //     disabled_by_default: false
  //     id: sensor_sensor_id_7
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:signal-cellular-outline
  //     accuracy_decimals: 0
  //     state_class: measurement
  //   total_attempts:
  //     name: Tentatives de lecture
  //     disabled_by_default: false
  //     id: sensor_sensor_id_8
  //     force_update: false
  //     icon: mdi:counter
  //     accuracy_decimals: 0
  //     state_class: total_increasing
  //     entity_category: diagnostic
  //   successful_reads:
  //     name: Lectures reussies
  //     disabled_by_default: false
  //     id: sensor_sensor_id_9
  //     force_update: false
  //     icon: mdi:check-circle
  //     accuracy_decimals: 0
  //     state_class: total_increasing
  //     entity_category: diagnostic
  //   failed_reads:
  //     name: Lectures echouees
  //     disabled_by_default: false
  //     id: sensor_sensor_id_10
  //     force_update: false
  //     icon: mdi:alert-circle
  //     accuracy_decimals: 0
  //     state_class: total_increasing
  //     entity_category: diagnostic
  //   frequency_offset:
  //     name: Offset frequence
  //     disabled_by_default: false
  //     id: sensor_sensor_id_11
  //     force_update: false
  //     unit_of_measurement: kHz
  //     icon: mdi:sine-wave
  //     accuracy_decimals: 3
  //     state_class: measurement
  //     entity_category: diagnostic
  //   tuned_frequency:
  //     name: Frequence accordee (MHz)
  //     disabled_by_default: false
  //     id: sensor_sensor_id_12
  //     force_update: false
  //     unit_of_measurement: MHz
  //     icon: mdi:radio-tower
  //     accuracy_decimals: 6
  //     state_class: measurement
  //     entity_category: diagnostic
  //   frequency_estimate:
  //     name: Estimation frequence
  //     disabled_by_default: false
  //     id: sensor_sensor_id_13
  //     force_update: false
  //     unit_of_measurement: kHz
  //     icon: mdi:sine-wave
  //     accuracy_decimals: 3
  //     state_class: measurement
  //     entity_category: diagnostic
  //   gdo2_timeouts:
  //     name: Timeouts GDO2
  //     disabled_by_default: false
  //     id: sensor_sensor_id_14
  //     force_update: false
  //     icon: mdi:pulse
  //     accuracy_decimals: 0
  //     state_class: total_increasing
  //     entity_category: diagnostic
  //   meter_serial_sensor:
  //     name: Numero de serie
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id
  //     icon: mdi:barcode
  //     entity_category: diagnostic
  //   meter_year_sensor:
  //     name: Annee compteur
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_2
  //     icon: mdi:calendar
  //     entity_category: diagnostic
  //   meter_clock_sensor:
  //     name: Horloge compteur
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_3
  //     icon: mdi:clock-digital
  //     entity_category: diagnostic
  //   meter_model_sensor:
  //     name: Modele compteur
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_4
  //     icon: mdi:barcode
  //     entity_category: diagnostic
  //   reading_schedule_sensor:
  //     name: Planning de lecture
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_5
  //     icon: mdi:calendar-clock
  //     entity_category: diagnostic
  //   reading_time_utc_sensor:
  //     name: Heure de lecture (UTC)
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_6
  //     icon: mdi:clock-outline
  //     entity_category: diagnostic
  //   time_start:
  //     name: Debut fenetre de reveil
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_7
  //     icon: mdi:clock-start
  //   time_end:
  //     name: Fin fenetre de reveil
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_8
  //     icon: mdi:clock-end
  //   status:
  //     name: Statut
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_9
  //     icon: mdi:information
  //   error:
  //     name: Derniere erreur
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_10
  //     icon: mdi:alert
  //     entity_category: diagnostic
  //   radio_state:
  //     name: Etat radio
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_11
  //     icon: mdi:radio-tower
  //     entity_category: diagnostic
  //   timestamp:
  //     name: Derniere lecture
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_12
  //     icon: mdi:clock
  //     device_class: timestamp
  //   history_json:
  //     name: Historique (JSON)
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_13
  //     icon: mdi:history
  //   firmware_version:
  //     name: Version firmware
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_14
  //     icon: mdi:tag
  //     entity_category: diagnostic
  //   active_reading:
  //     name: Lecture en cours
  //     disabled_by_default: false
  //     id: binary_sensor_binarysensor_id
  //     device_class: running
  //   radio_connected:
  //     name: Radio connectee
  //     disabled_by_default: false
  //     id: binary_sensor_binarysensor_id_2
  //     icon: mdi:radio-tower
  //     entity_category: diagnostic
  //     device_class: connectivity
  //   disable_gdo2_fifo_management: false
  //   gas_volume_divisor: 100
  //   frequency: 433.82
  //   auto_scan: false
  //   auto_scan_on_failure: true
  //   auto_align_midpoint: true
  //   max_retries: 5
  //   retry_cooldown: 1h
  //   debug_cc1101: false
  //   adaptive_threshold: 1
  //   rx_attenuation: 0
  //   update_interval: 24h
  new(compteur_eau) everblu_meter::EverbluMeterComponent();
  compteur_eau->set_update_interval(86400000);
  App.register_component_(compteur_eau, 13);
  compteur_eau->set_spi_parent(main_bus);
  new(esp32_esp32internalgpiopin_id_4) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_4->set_pin(::GPIO_NUM_25);
  esp32_esp32internalgpiopin_id_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  compteur_eau->set_cs_pin(esp32_esp32internalgpiopin_id_4);
  new(esp32_esp32internalgpiopin_id_5) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_5->set_pin(::GPIO_NUM_4);
  esp32_esp32internalgpiopin_id_5->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_5->set_flags(gpio::Flags::FLAG_INPUT);
  compteur_eau->set_gdo0_pin(esp32_esp32internalgpiopin_id_5);
  new(esp32_esp32internalgpiopin_id_6) esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_6->set_pin(::GPIO_NUM_27);
  esp32_esp32internalgpiopin_id_6->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_6->set_flags(gpio::Flags::FLAG_INPUT);
  compteur_eau->set_gdo2_pin(esp32_esp32internalgpiopin_id_6);
  compteur_eau->set_meter_code("13-0685444-219");
  compteur_eau->set_meter_year(13);
  compteur_eau->set_meter_serial(685444);
  compteur_eau->set_meter_type(false);
  compteur_eau->set_gas_volume_divisor(100);
  compteur_eau->set_frequency(433.82f);
  compteur_eau->set_auto_scan(false);
  compteur_eau->set_auto_scan_on_failure(true);
  compteur_eau->set_reading_schedule("Never");
  compteur_eau->set_read_hour(4);
  compteur_eau->set_read_minute(0);
  compteur_eau->set_timezone_offset(60);
  compteur_eau->set_auto_align_time(true);
  compteur_eau->set_auto_align_midpoint(true);
  compteur_eau->set_max_retries(5);
  compteur_eau->set_retry_cooldown(3600000);
  compteur_eau->set_initial_read_on_boot(false);
  compteur_eau->set_adaptive_threshold(1);
  compteur_eau->set_rx_attenuation(0);
  compteur_eau->set_time_component(ha_time);
  new(sensor_sensor_id) sensor::Sensor();
  sensor_sensor_id->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id, "Volume compteur", 2142230563, 65793);  // dc:water, uom:L, icon:mdi:water
  compteur_eau->set_volume_sensor(sensor_sensor_id);
  new(sensor_sensor_id_3) sensor::Sensor();
  sensor_sensor_id_3->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_3->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_3, "Piles compteur (mois)", 2888072839UL, 131584);  // uom:months, icon:mdi:battery-clock
  compteur_eau->set_battery_sensor(sensor_sensor_id_3);
  new(sensor_sensor_id_2) sensor::Sensor();
  sensor_sensor_id_2->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_2->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_2, "Compteur de lectures", 879354760, 196608);  // icon:mdi:counter
  compteur_eau->set_counter_sensor(sensor_sensor_id_2);
  new(sensor_sensor_id_4) sensor::Sensor();
  sensor_sensor_id_4->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_4->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_4, "RSSI compteur", 3989606270UL, 262914);  // dc:signal_strength, uom:dBm, icon:mdi:signal
  compteur_eau->set_rssi_sensor(sensor_sensor_id_4);
  new(sensor_sensor_id_5) sensor::Sensor();
  sensor_sensor_id_5->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_5->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_5, "RSSI pourcentage", 2181291244UL, 328704);  // uom:%, icon:mdi:signal-cellular-3
  compteur_eau->set_rssi_percentage_sensor(sensor_sensor_id_5);
  new(sensor_sensor_id_6) sensor::Sensor();
  sensor_sensor_id_6->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_6->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_6, "LQI compteur", 530463957, 262144);  // icon:mdi:signal
  compteur_eau->set_lqi_sensor(sensor_sensor_id_6);
  new(sensor_sensor_id_7) sensor::Sensor();
  sensor_sensor_id_7->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_7->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_7, "LQI pourcentage", 3209979897UL, 394240);  // uom:%, icon:mdi:signal-cellular-outline
  compteur_eau->set_lqi_percentage_sensor(sensor_sensor_id_7);
  new(text_sensor_textsensor_id_7) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_7, "Debut fenetre de reveil", 4096763133UL, 458752);  // icon:mdi:clock-start
  compteur_eau->set_time_start_sensor(text_sensor_textsensor_id_7);
  new(text_sensor_textsensor_id_8) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_8, "Fin fenetre de reveil", 2814479384UL, 524288);  // icon:mdi:clock-end
  compteur_eau->set_time_end_sensor(text_sensor_textsensor_id_8);
  new(sensor_sensor_id_8) sensor::Sensor();
  sensor_sensor_id_8->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_8->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_8, "Tentatives de lecture", 1438526377, 134414336);  // category:diagnostic, icon:mdi:counter
  compteur_eau->set_total_attempts_sensor(sensor_sensor_id_8);
  new(sensor_sensor_id_9) sensor::Sensor();
  sensor_sensor_id_9->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_9->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_9, "Lectures reussies", 4073556748UL, 134807552);  // category:diagnostic, icon:mdi:check-circle
  compteur_eau->set_successful_reads_sensor(sensor_sensor_id_9);
  new(sensor_sensor_id_10) sensor::Sensor();
  sensor_sensor_id_10->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_10->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_10, "Lectures echouees", 1298649826, 134873088);  // category:diagnostic, icon:mdi:alert-circle
  compteur_eau->set_failed_reads_sensor(sensor_sensor_id_10);
  new(sensor_sensor_id_14) sensor::Sensor();
  sensor_sensor_id_14->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  sensor_sensor_id_14->set_accuracy_decimals(0);
  App.register_sensor(sensor_sensor_id_14, "Timeouts GDO2", 347888586, 134938624);  // category:diagnostic, icon:mdi:pulse
  compteur_eau->set_gdo2_timeouts_sensor(sensor_sensor_id_14);
  new(sensor_sensor_id_11) sensor::Sensor();
  sensor_sensor_id_11->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_11->set_accuracy_decimals(3);
  App.register_sensor(sensor_sensor_id_11, "Offset frequence", 798770723, 135005440);  // category:diagnostic, uom:kHz, icon:mdi:sine-wave
  compteur_eau->set_frequency_offset_sensor(sensor_sensor_id_11);
  new(sensor_sensor_id_12) sensor::Sensor();
  sensor_sensor_id_12->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_12->set_accuracy_decimals(6);
  App.register_sensor(sensor_sensor_id_12, "Frequence accordee (MHz)", 1182070406, 135071232);  // category:diagnostic, uom:MHz, icon:mdi:radio-tower
  compteur_eau->set_tuned_frequency_sensor(sensor_sensor_id_12);
  new(sensor_sensor_id_13) sensor::Sensor();
  sensor_sensor_id_13->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_id_13->set_accuracy_decimals(3);
  App.register_sensor(sensor_sensor_id_13, "Estimation frequence", 1702665867, 135005440);  // category:diagnostic, uom:kHz, icon:mdi:sine-wave
  compteur_eau->set_frequency_estimate_sensor(sensor_sensor_id_13);
  new(text_sensor_textsensor_id_9) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_9, "Statut", 939730932, 917504);  // icon:mdi:information
  compteur_eau->set_status_sensor(text_sensor_textsensor_id_9);
  new(text_sensor_textsensor_id_10) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_10, "Derniere erreur", 1841744807, 135200768);  // category:diagnostic, icon:mdi:alert
  compteur_eau->set_error_sensor(text_sensor_textsensor_id_10);
  new(text_sensor_textsensor_id_11) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_11, "Etat radio", 2748704157UL, 135069696);  // category:diagnostic, icon:mdi:radio-tower
  compteur_eau->set_radio_state_sensor(text_sensor_textsensor_id_11);
  new(text_sensor_textsensor_id_12) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_12, "Derniere lecture", 1772424202, 1048579);  // dc:timestamp, icon:mdi:clock
  compteur_eau->set_timestamp_sensor(text_sensor_textsensor_id_12);
  new(text_sensor_textsensor_id_13) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_13, "Historique (JSON)", 2785564041UL, 1114112);  // icon:mdi:history
  compteur_eau->set_history_sensor(text_sensor_textsensor_id_13);
  new(text_sensor_textsensor_id_14) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_14, "Version firmware", 4207182873UL, 135397376);  // category:diagnostic, icon:mdi:tag
  compteur_eau->set_version_sensor(text_sensor_textsensor_id_14);
  new(text_sensor_textsensor_id) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id, "Numero de serie", 4290316404UL, 135462912);  // category:diagnostic, icon:mdi:barcode
  compteur_eau->set_meter_serial_sensor(text_sensor_textsensor_id);
  new(text_sensor_textsensor_id_2) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_2, "Annee compteur", 1569574790, 135528448);  // category:diagnostic, icon:mdi:calendar
  compteur_eau->set_meter_year_sensor(text_sensor_textsensor_id_2);
  new(text_sensor_textsensor_id_3) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_3, "Horloge compteur", 3718072739UL, 135593984);  // category:diagnostic, icon:mdi:clock-digital
  compteur_eau->set_meter_clock_sensor(text_sensor_textsensor_id_3);
  new(text_sensor_textsensor_id_4) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_4, "Modele compteur", 4232894381UL, 135462912);  // category:diagnostic, icon:mdi:barcode
  compteur_eau->set_meter_model_sensor(text_sensor_textsensor_id_4);
  new(text_sensor_textsensor_id_5) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_5, "Planning de lecture", 243020627, 135659520);  // category:diagnostic, icon:mdi:calendar-clock
  compteur_eau->set_reading_schedule_sensor(text_sensor_textsensor_id_5);
  new(text_sensor_textsensor_id_6) text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_6, "Heure de lecture (UTC)", 2022128664, 135725056);  // category:diagnostic, icon:mdi:clock-outline
  compteur_eau->set_reading_time_utc_sensor(text_sensor_textsensor_id_6);
  new(binary_sensor_binarysensor_id) binary_sensor::BinarySensor();
  binary_sensor_binarysensor_id->set_trigger_on_initial_state(false);
  App.register_binary_sensor(binary_sensor_binarysensor_id, "Lecture en cours", 2412996298UL, 4);  // dc:running
  compteur_eau->set_active_reading_sensor(binary_sensor_binarysensor_id);
  new(binary_sensor_binarysensor_id_2) binary_sensor::BinarySensor();
  binary_sensor_binarysensor_id_2->set_trigger_on_initial_state(false);
  App.register_binary_sensor(binary_sensor_binarysensor_id_2, "Radio connectee", 2272663399UL, 135069701);  // category:diagnostic, dc:connectivity, icon:mdi:radio-tower
  compteur_eau->set_radio_connected_sensor(binary_sensor_binarysensor_id_2);
  new(everblu_meter_everblumetertriggerbutton_id) everblu_meter::EverbluMeterTriggerButton();
  App.register_button(everblu_meter_everblumetertriggerbutton_id, "Lire le compteur maintenant", 2985110669UL, 0);
  everblu_meter_everblumetertriggerbutton_id->set_parent(compteur_eau);
  everblu_meter_everblumetertriggerbutton_id->set_deep_scan(false);
  everblu_meter_everblumetertriggerbutton_id->set_reset_frequency(false);
  new(everblu_meter_everblumetertriggerbutton_id_2) everblu_meter::EverbluMeterTriggerButton();
  App.register_button(everblu_meter_everblumetertriggerbutton_id_2, "Scan frequentiel profond", 2932623824UL, 68681728);  // category:config, icon:mdi:radar
  everblu_meter_everblumetertriggerbutton_id_2->set_parent(compteur_eau);
  everblu_meter_everblumetertriggerbutton_id_2->set_deep_scan(true);
  everblu_meter_everblumetertriggerbutton_id_2->set_reset_frequency(false);
  new(everblu_meter_everblumetertriggerbutton_id_3) everblu_meter::EverbluMeterTriggerButton();
  App.register_button(everblu_meter_everblumetertriggerbutton_id_3, "Reinitialiser offset frequence", 2386759524UL, 68747264);  // category:config, icon:mdi:restore
  everblu_meter_everblumetertriggerbutton_id_3->set_parent(compteur_eau);
  everblu_meter_everblumetertriggerbutton_id_3->set_deep_scan(false);
  everblu_meter_everblumetertriggerbutton_id_3->set_reset_frequency(true);
  new(everblu_meter_everblumetertriggerbutton_id_4) everblu_meter::EverbluMeterTriggerButton();
  App.register_button(everblu_meter_everblumetertriggerbutton_id_4, "Arreter la lecture", 1245743693, 68812800);  // category:config, icon:mdi:stop-circle-outline
  everblu_meter_everblumetertriggerbutton_id_4->set_parent(compteur_eau);
  everblu_meter_everblumetertriggerbutton_id_4->set_stop(true);
  new(everblu_meter_everblumetertriggerbutton_id_5) everblu_meter::EverbluMeterTriggerButton();
  App.register_button(everblu_meter_everblumetertriggerbutton_id_5, "Rapport diagnostic", 457148727, 135987200);  // category:diagnostic, icon:mdi:clipboard-text-search-outline
  everblu_meter_everblumetertriggerbutton_id_5->set_parent(compteur_eau);
  everblu_meter_everblumetertriggerbutton_id_5->set_diagnostic(true);
  // md5:
  // sha256:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // web_server_idf:
  //   {}
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
