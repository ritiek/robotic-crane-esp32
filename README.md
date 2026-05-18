# robotic-crane-esp32

Control a robotic crane arm with 4 degree of freedom through micro servo motors. Such as this product:
https://www.amazon.in/DOF-servo-Controlled-Robotic-Gripper/dp/B07R6SWCM7

## Hardware

### Requirements

1. Robotic crane hardware.
2. ESP32 or other microcontroller (we'll assume ESP32 here).
3. 5v power source, capable of providing 2A or more current.
4. Couple of jumper cables.
5. A breadboard.
6. Windows or a Linux machine.

<img src="http://i.imgur.com/Ktx7mkr.jpeg" width="600">

### Wiring

1. Connect the PWM signal jumpers from all the four micro servo motors to appropriate pins on ESP32 as defined in
[robotic-crane/robotic-crane.ino](https://github.com/ritiek/robotic-crane-esp32/blob/main/robotic-crane/robotic-crane.ino#L3-L6).
2. Connect the other two pins of all the micro servo motors to +5V and GND using an external power source by making parallel connections on the breadboard.

<img src="http://i.imgur.com/L4ESPoJ.jpeg" width="600">
<img src="http://i.imgur.com/6qC5kG1.jpeg" width="450">

## Software

See the Arduino IDE section for Windows or the PlatformIO section for Linux.

### Arduino IDE (Windows)

#### Install CP210x USB to UART Bridge VCP Drivers

1. Go to https://silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads.
2. Download "CP210x VCP Windows".
3. Install the downloaded drivers.

#### Setup Arduino IDE

Download and install Arduino IDE and also download and extract the zip of this repository.

Assuming you have ESP32 Dev Module, perform the following steps:

1. In Arduino IDE, go to File -> Open... -> <select robotic-crane/robotic-crane.ino from this directory>.
2. Go to Tools -> Board -> Boards Manager... -> <search for "esp32"> and install "esp32 by Espressif Systems".
3. Go to Tools -> Manage Libraries... -> <search for "ESP32Servo"> and install "ESP32Servo by Kevin".
4. Once both are installed, set the correct board by going to Tools -> Board -> esp32 -> ESP32 Dev Module (adjust this accordingly depending on your board).
5. Take a note of what all COM ports are available by going to Tools -> Port -> ...
6. Connect the board to your computer and there should be a new COM port available in Tools -> Port -> COM7 (as an example). Select this new port.
7. Now go to Sketch -> Upload. Once it's done compiling, it'll show the "Connecting..." message. When it does so, press and hold the IO0 (or the BOOT) button for 1s and then release it.
8. It should now correctly upload the sketch onto your ESP32 board.

### PlatformIO (Linux)

Assuming the board is connected to `/dev/ttyUSB0`, run:

```bash
$ pio run --target upload --upload-port /dev/ttyUSB0
$ pio device monitor --port /dev/ttyUSB0 --baud 115200
```
