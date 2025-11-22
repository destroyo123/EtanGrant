# XBee-BNO55-Test_Uno
## Purpose:
- Test the XBee radio communication module
- Test a 9-axis IMU (BNO55) similar to the BNO85 we intend to use with WREC.
- Look cool

## How to use:
### Program the Arduino
- Connect the Arduino Uno via USB
- Using PlatformIO in VS Code, **build** the project with the checkmark button at the bottom of your screen
- Click the -> button to the right of the build button to upload it to the Arduino Uno
- Unplug the Arduino Uno from the computer

## Set up the Arduino
### Pinout (Xbee3)
For the Arduino Uno:
| XBee3 pin | Arduino Uno Pin |
| :------ | :----------: |
| 1 (Vcc) | 3v3 |
| 3 (DIN/CONFIG) | Rx (~9) |
| 2 (DOUT) | Tx (~8) |
| 10 (GND) | GND (any) |

### Pinout (XB9X SX900)
For the Arduino Uno:
| XBee (SX900) pin | Arduino Uno Pin |
| :------ | :----------: |
| 2 (Vcc) | 3v3 |
| 4 (DIN/CONFIG) | Rx (~9) |
| 3 (DOUT) | Tx (~8) |
| 1 (GND) | GND (any) |

### Steps
- Connect the BNO55 and XBee modules to the Uno, however (breadboard, wires, jumpers, I don't care)
  - Use the pinout from above.
- Connect the computer-side XBee module
- Power on the Arduino/BNO55/Xbee setup

## Set up the Computer-side software
- In the "test" subfolder, check that there are these two files:
  - imu_viewer.html
  - serial_ws_bridge.py
- Open the imu_viewer.html file (should open in any browser)
- Click on the 'serial_ws_bridge.py' program in VSCode
- Set the "COM5" port text to whatever the XBee module is in reality (mine is probably COM33 or COM32
- run the Python script with the button in the top-right corner

**Assuming things are working, that's probably it?**
