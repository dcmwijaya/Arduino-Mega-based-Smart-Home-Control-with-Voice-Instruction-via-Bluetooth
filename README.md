[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition
<strong>Solo Project: Smart Home with Bluetooth Voice Recognition</strong><br><br>
This smart home is equipped with bluetooth that allows users to perform various commands such as turning on and off a device.

<br><br>

## Project Requirements
| Media | Description |
| --- | --- |
| Board Development | Arduino Mega 2560 |
| Code Editor | Arduino IDE |
| Application Support | Bluetooth Voice |
| Driver | USB-Serial CH340 |
| Programming Language | C/C++ |
| Actuators | Fan DC 5V (x1), LED (x1), Piezoelectric (x1) |
| Sensor | JDY-31 SPP-C: Bluetooth Module (x1) |
| Display | LCD I2C (x1) |
| Other Components | USB type B cable - USB type A (x1), Jumper cable (1 set), Adaptor DC 5V (x1), and Breadboard (x1) |

<br><br>

## Download & Install
1. Arduino IDE

   ```
   https://www.arduino.cc/en/software
   ```
<br>

2. USB-Serial CH340

   ```
   https://bit.ly/CH340_Driver
   ```
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition/assets/54527592/17509fc4-2427-43bb-be07-cb99e14f7b06" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition/assets/54527592/c0d8f18e-1e57-4ce4-b8cf-ef6044f4d656" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img width="840" src="https://github.com/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition/assets/54527592/7f117b70-912b-48da-8072-d912da31a59a" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Arduino IDE Setup
1. Make sure you have the necessary electronic components.<br><br>
   
2. Make sure your components are designed according to the diagram.<br><br>
   
3. Open the ``` Arduino IDE ``` first, then open this project by clicking: ``` File ``` -> ``` Open ``` -> ``` arduinoMega_btvoice.ino ```.<br><br>
   
4. ``` Board Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Mega or Mega 2560 ```.<br><br>
   
5. ``` Install Library ``` in Arduino IDE<br><br>
   • Method: download all the library zip files. Then paste it in the: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```.<br><br>

6. ``` Port Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```.<br><br>

7. Before uploading the program please click: ``` Verify ```.<br><br>

8. If there is no error in the program code, then please click: ``` Upload ```.<br><br>
   
9. Please enjoy [Done].

<br><br>

## Bluetooth Voice Setup
1. Open your smartphone, then in the ``` Google Play Store ``` search for the ``` Bluetooth Voice ``` application made by ``` yashx ```, then install it.<br><br>

2. Turn on ``` bluetooth ```.<br><br>

3. Search for your bluetooth device name -> ``` pairing device ``` by entering the password: ``` 0000 ``` or ``` 1234 ```.<br><br>

4. Open ``` Bluetooth Voice ``` app -> select ``` JDY-31-SPP ```.<br><br>

5. Remove all existing built-in commands.<br><br>

6. Create a new command as seen below:
   
   <table>
      <tr>
         <th width="420">Say</th>
         <th width="420">Get</th>
      </tr>
      <tr>
         <td><p>Turn on the Alarm</p></td>
         <td><p>1</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Alarm</p></td>
         <td><p>2</p></td>
      </tr>
      <tr>
         <td><p>Turn on the Fan</p></td>
         <td><p>3</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Fan</p></td>
         <td><p>4</p></td>
      </tr>
      
      <tr>
         <td><p>Turn on the Lamp</p></td>
         <td><p>5</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Lamp</p></td>
         <td><p>6</p></td>
      </tr>
      
      <tr>
         <td><p>Turn on the Screen</p></td>
         <td><p>7</p></td>
      </tr>
      <tr>
         <td><p>Turn off the Screen</p></td>
         <td><p>8</p></td>
      </tr>
      <tr>
         <td><p>Turn off All Devices</p></td>
         <td><p>9</p></td>
      </tr>
   </table>

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
<img src="" alt="smart_home_btvoice">

<br><br>

## LICENSE
MIT License - Copyright (c) 2024 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
