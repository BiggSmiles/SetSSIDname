#include <ESP8266WiFi.h>

//const char* wifiname = "Shop_Server";
//const char* wifipsw = "biggsmiles";

//const char* wifiname = "ScoreBoard";
//const char* wifipsw = "cornhole";

//const char* wifiname = "Lodge555";
//const char* wifipsw = "Lodge555";


//const char* wifiname = "JunkYard";
//const char* wifipsw = "junkyard";

const char* wifiname = "ExhaustFan";
const char* wifipsw = "";
//const char* wifipsw = "";

void setup()
	{
	Serial.begin(115200);

	Serial.println();

	Serial.print("Setting SSID: ");  Serial.print(wifiname);  Serial.print(" and PSW: ");	 Serial.println(wifipsw);
	boolean result = WiFi.softAP(wifiname, wifipsw);
	if (result == true)
		{
		Serial.println("setup Ready");
		result = WiFi.softAPdisconnect();
		delay(10090);

		result = WiFi.mode(WIFI_AP_STA);
		delay(1000);
		}
	else
		{
		Serial.println("setup Failed!");
		}

   delay(1000);
	}
void loop()
	{
	Serial.printf("Stations connected = %d", WiFi.softAPgetStationNum());
	Serial.print("  SSid name:  ");  Serial.println(WiFi.SSID());
	delay(3000);
	}
