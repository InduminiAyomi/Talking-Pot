#include "Nextion.h"
#include <SoftwareSerial.h>

NexPage page0    = NexPage(0, 0, "start");
NexPage page1    = NexPage(1, 0, "ssid");
NexText id=NexText(0,2,"t0");

NexPage page2    = NexPage(2, 0, "paswrd");
NexPage page3    = NexPage(3, 0, "update");


NexTouch *nex_listen_list[]=
{
  &id,
  NULL
  };

SoftwareSerial softSerial(10, 11);
//Adafruit_Fingerprint fingerPrint = Adafruit_Fingerprint(&softSerial);
//String ssid_name=id;//ssid
char pwrd[100]={0};//pw
 

  void setup() {
  Serial.begin(9600);
  }

  //String ssidName(){
   //Serial.println(&id);
  // return softSerial.id;   
    //}
