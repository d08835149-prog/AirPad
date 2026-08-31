# AirPad

AirPad is a 16-key macropad with an OLED display, powered by a XIAO RP2040.

I made it mainly for shortcuts and programs I use often on my computer.
It uses QMK firmware.

## Features

- 16 mechanical keys
- 0.91" OLED display
- XIAO RP2040
- 4x4 key matrix
- Custom PCB
- Custom case
- QMK firmware
- Shortcuts for Windows, programs, and YouTube

## CAD Model

I designed the case in Onshape.

The case has a bottom part and a top plate, with space for the PCB, switches, OLED, and the USB-C port.

[CAD image here]

## PCB

I made the PCB in KiCad.

It uses a 4x4 matrix with 16 switches and 16 1N4148 diodes.

### Schematic

[Schematic image here]

### PCB

[PCB image here]

## Firmware

AirPad uses QMK firmware.

The keys are:

| | | | |
|---|---|---|---|
| Calculator | Volume + | Volume - | Screenshot |
| Copy | Paste | VS Code | Notepad |
| Discord | File Explorer | Undo | Redo |
| YouTube Mute | Play/Pause | Previous Video | Next Video |

Some keys use normal keyboard shortcuts, while the program keys can open VS Code, Notepad, Discord, and File Explorer.

### OLED

The OLED normally shows:

`AIRPAD`

`READY`

When I press a key, it shows what that key does. For example, pressing the copy key changes the display to `COPY`.

## BOM

- 16x Mechanical switches
- 16x Keycaps
- 16x 1N4148 diodes
- 1x XIAO RP2040
- 1x 0.91" OLED display
- 1x Custom PCB
- 1x 3D printed case
