#include <WiFi.h>
#include<otaUpdate.h>

int led = 13;

float currentVersion = 1.0;
String Token = "YourToken";

const char* ssid = "Wifiname";
const char* password = "Password";

otaUpdate devUpdt(true);

void setup() {

Serial.begin(115200);
pinMode(led, OUTPUT);
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

Serial.println("Current version: ");
Serial.print(currentVersion);
digitalWrite(led,HIGH);
delay(5000);
digitalWrite(led,LOW);


}else{
Serial.println("There is no network connection!..Retry.");
}

}
