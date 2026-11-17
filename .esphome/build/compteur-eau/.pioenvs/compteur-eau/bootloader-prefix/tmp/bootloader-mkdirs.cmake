# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/romai/.platformio/packages/framework-espidf/components/bootloader/subproject")
  file(MAKE_DIRECTORY "C:/Users/romai/.platformio/packages/framework-espidf/components/bootloader/subproject")
endif()
file(MAKE_DIRECTORY
  "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader"
  "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader-prefix"
  "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader-prefix/tmp"
  "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader-prefix/src/bootloader-stamp"
  "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader-prefix/src"
  "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/dev/compteur_eau/.esphome/build/compteur-eau/.pioenvs/compteur-eau/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
