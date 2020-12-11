#include <WiFi.h>
#include"otaUpdate.h"


String currentVersion = "0.9";
String Token = "YourToken";

const char* ssid = "Wifiname";
const char* password = "Password";

otaUpdate devUpdt(true);

void setup() {

Serial.begin(115200);

WiFi.begin(ssid, password);

while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.println("Connecting to WiFi..");
}

Serial.println("Connected to the WiFi network");

}
void loop()
{
if (WiFi.status() == WL_CONNECTED)
{
delay(2000);
int FileBin = devUpdt.updates(currentVersion,Token);


}else{
Serial.println("There is no network connection!..Retry.");
}

}
