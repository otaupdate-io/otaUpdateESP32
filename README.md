# HTTPS OTA Update Library for Esp32
## Libraries required
- [ArduinoJSON v6](https://arduinojson.org/v6/doc/installation/)
- [OtaUpdate.io-Esp32](https://github.com/artiwiztechnologies/OtaUpdate.io-Esp32)

## Steps to be followed
#### Process 1 for initial update(V 0.9)

- Sign up on [OtaUpdate.io](https://otaupdate.io/register)
- Adding a device in [OtaUpdate.io](https://otaupdate.io/home)
- Copy the device Token that is Generated.
- Download the [OtaUpdate.io-Esp32](https://github.com/artiwiztechnologies/OtaUpdate.io-Esp32/archive/master.zip) library zip file.
- Start Arduino IDE.
- Add the zip file to Arduino IDE.
- Open otaUpdate-Esp32 from the examples.
- Paste the device token Generated in [OtaUpdate.io](https://otaupdate.io/home)
- Configure Your wifi credentials.
- Change the firmware version as per your firmware updates. By default it is in Version 0.9.
- Upload the program to your Esp32.

#### Process 2 for initial update(V 1.0)

- Start Arduino IDE.
- Open OtaUpdate.io-Esp32-LED_APP from the examples.
- Paste the device token Generated in [OtaUpdate.io](https://otaupdate.io/home) (The same device token that was generated in process 1)
- Configure Your wifi credentials.
- Change the firmware version to 1.1 (Version keeps incrementing based on your updates).
- Compile the program.
- Go to Arduino IDE toolbar and select sketch and click Export Compiled binary.
- Go to [OtaUpdate.io](https://otaupdate.io/home) and click <input type=Button value= Manage Style="background :#0169D9 ; color:#ffff; border-radius:5px"   > device to open the device details page.
- Click Release update.
- Upload the `.bin` file that was generated.
- Add the features of the update.
- Click <input type=Button value= Add Style="background :#c82333 ; color:#ffff; border-radius:5px">.
- The update file has been update successfully.
- Click on the edit icon and select firmware version as 1.0 and click save.
- Change the <b>Update status</b> to Live.
- Plugin the Esp32 to you system and open your serial monitor.
- The firmware will get upgraded to version 1.0.
- Repeat `Process` 2 to Release new update again.

`NOTE: Don't forget to change the version number in your program as you update.`

## Process 1 for initial update(V 0.9)
`Sign up on [OtaUpdate.io](https://otaupdate.io/register)`

![alt text](https://i.imgur.com/SHaG7pE.png)

`Adding a device in [OtaUpdate.io](https://otaupdate.io/home)`

![alt text](https://i.ibb.co/Qm8DTyv/Screenshot-2020-12-11-at-11-38-36-PM.png)
![alt text](https://i.ibb.co/VjpRnbS/Screenshot-2020-12-11-at-11-44-53-PM.png)

`Copy the device Token that is Generated.`

![alt text](https://i.ibb.co/hWnbS0m/Screenshot-2020-12-11-at-11-49-27-PM.png)

`Add the zip file to Arduino IDE.`

![alt text](https://i.ibb.co/0sjS7Ym/Screenshot-2020-12-12-at-12-02-22-AM.png)

`Open otaUpdate-Esp32 from the examples.`

![alt text](https://i.ibb.co/YQrcsM3/Screenshot-2020-12-12-at-12-07-26-AM.png)

`Paste the device token Generated in` [OtaUpdate.io](https://otaupdate.io/home)

![alt text](https://i.ibb.co/F67THWZ/Screenshot-2020-12-12-at-12-14-32-AM.png)

`Configure Your wifi credentials.`

![alt text](https://i.ibb.co/wh4yFyY/Screenshot-2020-12-12-at-12-16-52-AM.png)

`Change the firmware version as per your firmware updates. By default it is in Version 0.9.`

![alt text](https://i.ibb.co/zxr8Qfk/Screenshot-2020-12-12-at-12-19-02-AM.png)

`Upload the program to your Esp32.`

![alt text](https://i.ibb.co/n7C61W9/Screenshot-2020-12-12-at-12-20-28-AM.png)

## Process 2 for initial update(V 1.0)
