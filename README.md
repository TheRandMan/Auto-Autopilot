# Auto-Autopilot
Digispark ATtiny85 script to breeze through a wifi autopilot setup of Windows 10

# Requirements
- Digispark ATtiny85 microcontroller
- Windows 10 device you want to autopilot **over wifi**
- USB flash drive for storing your wifi profile
- We'll assume you have the Digispark ATtiny85 Arduino environment set up already
- Only confirmed working on Windows 10 1909 (10.0.18363) and HP ProBook x360 G5 EE
  - Will probably work on other devices but YMMV

# What this does
- Installs a wifi profile from a flash drive
- Automatically flys through the OOBE menus to select Autopilot setup

# How to use
- Replace DigiKeyboard.h with the one included in this repo (the stock one doesn't include the down arrow key for some reason)
  - For MacOS it's located in ~/Library/Arduino15/packages/digistump/hardware/avr/1.6.7/libraries/DigisparkKeyboard/
- Flash auto-autopilot.ino to your Digispark ATtiny85
- Download wifi.xml and edit it for your wireless network
  - Replace the 2 instances of **{SSID}** with your SSID
  - Replace **{KEY}** with your wireless network password
- Place your modified wifi.xml on at the root of a USB flash drive
- Boot up Windows 10 to the OOBE menu
- Insert the USB flash drive with wifi.xml
- Insert your Digispark ATtiny85 and away you go!
