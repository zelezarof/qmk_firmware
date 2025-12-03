# ToTeM

![geigeigeist/totem](https://raw.githubusercontent.com/GEIGEIGEIST/TOTEM/refs/heads/main/docs/images/TOTEM_black_perspective.jpg)

*TOTEM is 34 keys column-staggered split keyboard made by @geigeigeist. It uses the Seeed XIAO RP2040.*

* Keyboard Maintainer: [zhelek](https://github.com/zhelek)
* Hardware Supported: [Seeed Studio XIAO nRF52840 BLE](https://www.seeedstudio.com/Seeed-XIAO-BLE-nRF52840-p-5201.html) or [XIAO RP2040](https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html).
* Hardware Availability: [GEIGEIGEIST](https://github.com/GEIGEIGEIST/TOTEM/tree/main/PCB) / [keeb.supply](https://keeb.supply/products/geist-totem)

Make example for this keyboard (after setting up your build environment):

    make geigeigeist/totem:default

Flashing example for this keyboard:

    make geigeigeist/totem:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
