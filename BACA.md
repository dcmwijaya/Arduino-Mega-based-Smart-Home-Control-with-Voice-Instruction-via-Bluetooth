[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Arduino-Mega-based-Smart-Home-Control-with-Voice-Instruction-via-Bluetooth
<strong>Proyek Tunggal: Kontrol Rumah Pintar berbasis Arduino Mega dengan Instruksi Suara melalui Bluetooth</strong><br><br>
Rumah pintar ini dilengkapi dengan bluetooth yang memungkinkan pengguna dapat melakukan berbagai macam perintah seperti menyalakan dan mematikan suatu perangkat.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | Arduino Mega 2560 |
| Editor Kode | Arduino IDE |
| Dukungan Aplikasi | Bluetooth Voice |
| Driver | USB-Serial CH340 |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | SoftwareSerial |
| Aktuator | • Kipas DC 5V (x1)<br>• LED (x1)<br>• Piezoelektrik (x1) |
| Sensor | JDY-31 SPP-C: Modul Bluetooth (x1) |
| Layar | LCD I2C (x1) |
| Komponen Lainnya | • Kabel USB tipe B - USB tipe A (x1)<br>• Kabel Jumper (1 set)<br>• Adaptor DC 5V (x1)<br>• Breadboard (x1) |

<br><br>

## Unduh & Instal
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>

2. USB-Serial CH340

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_Driver
   ```

   </td></tr></table>
   
<br><br>

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition/assets/54527592/17509fc4-2427-43bb-be07-cb99e14f7b06" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition/assets/54527592/c0d8f18e-1e57-4ce4-b8cf-ef6044f4d656" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img width="840" src="https://github.com/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition/assets/54527592/7f117b70-912b-48da-8072-d912da31a59a" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek ini dengan cara klik: ``` File ``` -> ``` Open ``` : 

   <table><tr><td width="810">
   
      ``` arduinoMega_btvoice.ino ```

   </td></tr></table><br>
   
2. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th width="810">

      Cara mengatur board ``` Arduino Mega 2560 ```
            
      </th></tr>
      <tr><td>
      
      Klik ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Mega or Mega 2560 ```

      </td></tr>
   </table><br>
   
3. ``` Instal Pustaka ``` di Arduino IDE

   <table><tr><td width="810">

      Unduh semua file zip pustaka. Kemudian tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```

   </td></tr></table><br>

4. ``` Pengaturan Port ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

5. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

6. Jika tidak ada kesalahan dalam kode program, silakan klik: ``` Upload ```.<br><br>

7. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` yang lainnya ```.

<br><br>

## Pengaturan Bluetooth Voice
1. Buka ponsel cerdas anda, lalu pada ``` Google Play Store ``` cari aplikasi ``` Bluetooth Voice ``` buatan ``` yashx ```, kemudian lakukan instalasi.<br><br>

2. Hidupkan ``` bluetooth ```.<br><br>

3. Cari nama device bluetooth anda -> ``` sandingkan perangkat ``` dengan memasukkan kata sandi: ``` 0000 ``` atau ``` 1234 ```.<br><br>

4. Buka aplikasi ``` Bluetooth Voice ``` -> pilih ``` JDY-31-SPP ```.<br><br>

5. Hapus semua perintah bawaan yang ada.<br><br>

6. Buat perintah baru seperti yang terlihat di bawah ini :
   
   <table>
      <tr>
         <th width="420">Say</th>
         <th width="420">Get</th>
      </tr>
      <tr>
         <td><p>Nyalakan Alarm</p></td>
         <td><p>1</p></td>
      </tr>
      <tr>
         <td><p>Matikan Alarm</p></td>
         <td><p>2</p></td>
      </tr>
      <tr>
         <td><p>Nyalakan Kipas</p></td>
         <td><p>3</p></td>
      </tr>
      <tr>
         <td><p>Matikan Kipas</p></td>
         <td><p>4</p></td>
      </tr>
      
      <tr>
         <td><p>Nyalakan Lampu</p></td>
         <td><p>5</p></td>
      </tr>
      <tr>
         <td><p>Matikan Lampu</p></td>
         <td><p>6</p></td>
      </tr>
      
      <tr>
         <td><p>Nyalakan Layar</p></td>
         <td><p>7</p></td>
      </tr>
      <tr>
         <td><p>Matikan Layar</p></td>
         <td><p>8</p></td>
      </tr>
      <tr>
         <td><p>Matikan Semua Perangkat</p></td>
         <td><p>9</p></td>
      </tr>
   </table>

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>
   
2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
    
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<img src="https://github.com/devancakra/Arduino-Mega-based-Smart-Home-with-Bluetooth-Voice-Recognition/assets/54527592/8a535f76-e5c3-4449-8c13-7a826dceee7f" alt="smart_home_btvoice">

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2024 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
