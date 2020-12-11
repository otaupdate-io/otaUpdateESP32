# HTTPS OTA Update Library for Esp32
## Libraries required
- [ArduinoJSON v6](https://arduinojson.org/v6/doc/installation/)
- [OtaUpdate.io-Esp32](https://github.com/artiwiztechnologies/OtaUpdate.io-Esp32)

## Steps to be followed
#### Process 1 for initial update(V 0.9)

- Sign up on [OtaUpdate.io](https://otaupdate.io/register)
- Adding a device in [OtaUpdate.io](https://otaupdate.io/home)
- Copy the device Token that is Generated.
- Start Arduino IDE download the OtaUpdate.io-Esp32 library zip file.
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

#### Process 1 for initial update(V 0.9)
`Sign up on [OtaUpdate.io](https://otaupdate.io/register)`<br>
![alt text](https://ibb.co/D5zGg10)
more text with two line breaks between.

- first time
- second time
- third time
  - indented
    1. inner number

[this is the description](http://www.github.com)

This paragraph has some `variable` inline code.

```html
<p>A paragraph example</p>
```
```javascript
let num = Math.random();
```

![alt text](http://picsum.photos/200/200)

Some paragraph with text.
> blockquote text below the paragraph

| heading | header | head |
| --- | --- | --- |
| content | more content | text |
| more | more | more |

This is being * created * on a ** Friday ** ~~Saturday~~.
