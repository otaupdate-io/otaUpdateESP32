#include "otaUpdate.h"
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <HTTPUpdate.h>

String DeviceStatus = "Live";
String apiUrl = "https://otaupdate.io/device/details?token=";
String FileP;
HTTPClient http;

otaUpdate::otaUpdate(bool UpdateAvailable)
{
Serial.println("Auto Update mode enabled!!");
}

int otaUpdate::updates(String currentVersion,String token)
{
http.begin(apiUrl+token);
int httpCode = http.GET();

String payloadOne = http.getString();
Serial.println(httpCode);
Serial.println(payloadOne);


const size_t capacity = JSON_ARRAY_SIZE(1) + JSON_OBJECT_SIZE(4) + 160;
DynamicJsonDocument doc(capacity);

deserializeJson(doc, payloadOne);

JsonObject root_0 = doc[0];
int root_0_DeviceID = root_0["DeviceID"]; // 4
Serial.println(root_0_DeviceID);
const char* root_0_UpdateStatus = root_0["UpdateStatus"]; // "Live"
Serial.print("UpdateStatus : ");
Serial.println(root_0_UpdateStatus);
const char* root_0_firmwareVersion = root_0["firmwareVersion"]; // "1.1"
Serial.print("firmwareVersion : ");
Serial.println(root_0_firmwareVersion);
const char* root_0_fileurl = root_0["fileurl"];

String DeviceID = String(root_0_DeviceID);
String UpdateStatus = String(root_0_UpdateStatus);
String latestVersion = String(root_0_firmwareVersion);
String FileURL = String(root_0_fileurl);

http.end();

if(currentVersion != latestVersion && DeviceStatus == UpdateStatus)
{
Serial.println("Update Available");
FileP=FileURL;
Serial.println(FileP);
startUpdate(FileURL);
}
else
{
Serial.println("Update not Available");
}
}

void otaUpdate::startUpdate(String url)
{
WiFiClientSecure client;
if(url!="" && url!=NULL){
Serial.println("Initialize update");

t_httpUpdate_return ret = httpUpdate.update(client, url);
// Or:
//t_httpUpdate_return ret = httpUpdate.update(client, "server", 80, "file.bin");

switch (ret) {
case HTTP_UPDATE_FAILED:
Serial.printf("HTTP_UPDATE_FAILED Error (%d): %s\n", httpUpdate.getLastError(), httpUpdate.getLastErrorString().c_str());
break;

case HTTP_UPDATE_NO_UPDATES:
Serial.println("HTTP_UPDATE_NO_UPDATES");
break;

case HTTP_UPDATE_OK:
Serial.println("HTTP_UPDATE_OK");
break;
}
}else{
Serial.println("Url Not found");
}
}
