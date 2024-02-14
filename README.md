# Arduino Morse Code Sender

Simple code that turns Arduino into morse code transmitter. Both sound and light broadcasts are supported.

The project was used in an outdoor game for scouts during summer camp, and this was the main purpose of its existence.

https://github.com/Wajktor13/arduino-morse-code-sender/assets/76243064/c157ce30-a7b7-498f-94a5-6ee2261a1b95

## Technologies used
![C++](https://img.shields.io/static/v1?style=for-the-badge&message=C%2B%2B&color=00599C&logo=C%2B%2B&logoColor=FFFFFF&label=)
![Arduino](https://img.shields.io/static/v1?style=for-the-badge&message=Arduino&color=00878F&logo=Arduino&logoColor=FFFFFF&label=)

## Usage
1. Connect electronics to Arduino like on scheme below (it shows Arduino Uno, but for other Arduinos it is very similar). You can change pins by modyfing constans in the code (default: 2 - error, 4 - broadcast light, 7 - broadcast sound). Remember to select correct resistors for diodes
  <br>

  ![image](https://github.com/Wajktor13/arduino-morse-code-sender/assets/76243064/e2302e05-30aa-4505-a0d1-bf266c1802a0)
  <br><br>
2. Copy / download the code
<br>
3. Put your message in line 26
<br>

![image](https://github.com/Wajktor13/arduino-morse-code-sender/assets/76243064/8f153bbc-522e-42df-b1e1-1a1b681663c4)
<br><br>

4. Upload to Arduino using Arduino IDE
