# LDK_34 (PCB Edition)

A low profile 34-key split monoblock ortholinear keyboard that uses 18x17mm spaced Choc switches and an exposed controller in the middle.

*   Keyboard Maintainer: [kruyerl](https://github.com/kruyerl)
*   Hardware Supported: Scotto34 PCB, Raspberry Pi Pico

# Compiling

Make example for this keyboard (after setting up your build environment):

    make ldk/ldk_34:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

# Bootloader

Enter the bootloader in 3 ways:

*   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
*   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
*   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
