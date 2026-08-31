# AirPad

AirPad is a 16-key macropad I made to make some things I do on my computer faster.

It has a 4x4 key layout, a XIAO RP2040, and a small OLED display. I designed the PCB and case and wrote the firmware using QMK.

## What can it do?

| | | | |
|---|---|---|---|
| Calculator | Volume + | Volume - | Screenshot |
| Copy | Paste | VS Code | Notepad |
| Discord | File Explorer | Undo | Redo |
| YouTube Mute | Play/Pause | Previous | Next |

The OLED shows the name of the key I just pressed.

## Hardware

- XIAO RP2040
- 16 switches
- 16 1N4148 diodes
- I2C OLED
- Custom PCB
- 3D printed case

## Files

`CAD` has the case and assembly files.

`PCB` has the KiCad files and BOM.

`Firmware` has the QMK source code.

`production` has the Gerbers, case files, and compiled UF2 firmware.

## Firmware

The firmware is written with QMK.

Some keys are normal shortcuts like copy and paste, while others open programs like VS Code, Discord, and Notepad. The bottom row is mainly for controlling YouTube.
