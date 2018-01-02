/*
 * PansonicSendDemo
 *
 * Thank's Ken Shiffiff
 */
#include <IRremote.h>
 
#define PanasonicAddress      0x555A     // Panasonic address (Pre data) 
#define PanasonicPower        0xF148688B  // Panasonic Power button
#define Panasonic1            0xF148724C  // Panasonic Power button
#define Panasonic2            0xF148F244  // Panasonic Power button
#define Panasonic3            0xF1480A43  // Panasonic Power button
#define Panasonic4            0xF1488A4B  // Panasonic Power button
#define Panasonic5            0xF1484A47  // Panasonic Power button
#define Panasonic6            0xF148CA4F  // Panasonic Power button
#define Panasonic7            0xF1482A41  // Panasonic Power button
#define Panasonic8            0xF148AA49  // Panasonic Power button
#define Panasonic9            0xF1486A45  // Panasonic Power button
#define Panasonic10           0xF148EA4D  // Panasonic Power button
#define Panasonic11           0xF1481A42  // Panasonic Power button
#define Panasonic12           0xF1486A45  // Panasonic Power button
#define PanasonicSchedule     0xF148064F  // Panasonic Power button
#define PanasonicRight        0xF1481B8F  // Panasonic Power button
#define PanasonicLeft         0xF148EB80  // Panasonic Power button
#define PanasonicDecision     0xF1484A8B  // Panasonic Power button


IRsend irsend;

void setup()
{
  Serial.begin(9800);
}

void loop()
{
  if (Serial.available() > 0 ){
    switch (Serial.read()){
      case 'p':
        irsend.sendPanasonic(PanasonicAddress,PanasonicPower); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,PanasonicPower); // This should turn your TV on and off
      break;
      case '1':
        irsend.sendPanasonic(PanasonicAddress,Panasonic1); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic1); // This should turn your TV on and off
      break;
      case '2':
        irsend.sendPanasonic(PanasonicAddress,Panasonic2); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic2); // This should turn your TV on and off
      break;
      case '3':
        irsend.sendPanasonic(PanasonicAddress,Panasonic3); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic3); // This should turn your TV on and off
      break;
      case '4':
        irsend.sendPanasonic(PanasonicAddress,Panasonic4); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic4); // This should turn your TV on and off
      break;
      case '5':
        irsend.sendPanasonic(PanasonicAddress,Panasonic5); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic5); // This should turn your TV on and off
      break;
      case '6':
        irsend.sendPanasonic(PanasonicAddress,Panasonic6); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic6); // This should turn your TV on and off
      break;
      case '7':
        irsend.sendPanasonic(PanasonicAddress,Panasonic7); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic7); // This should turn your TV on and off
      break;
      case '8':
        irsend.sendPanasonic(PanasonicAddress,Panasonic8); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic8); // This should turn your TV on and off
      break;
      case '9':
        irsend.sendPanasonic(PanasonicAddress,Panasonic9); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic9); // This should turn your TV on and off
      break;
      case '10':
        irsend.sendPanasonic(PanasonicAddress,Panasonic10); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic10); // This should turn your TV on and off
      break;
      case '11':
        irsend.sendPanasonic(PanasonicAddress,Panasonic11); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic11); // This should turn your TV on and off
      break;
      case '12':
        irsend.sendPanasonic(PanasonicAddress,Panasonic12); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,Panasonic12); // This should turn your TV on and off
      break;
      case 's':
        irsend.sendPanasonic(PanasonicAddress,PanasonicSchedule); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,PanasonicSchedule); // This should turn your TV on and off
      break;
      case 'r':
        irsend.sendPanasonic(PanasonicAddress,PanasonicRight); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,PanasonicRight); // This should turn your TV on and off
      break;
      case 'l':
        irsend.sendPanasonic(PanasonicAddress,PanasonicLeft); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,PanasonicLeft); // This should turn your TV on and off
      break;
      case 'd':
        irsend.sendPanasonic(PanasonicAddress,PanasonicDecision); // This should turn your TV on and off
        delay(10);
        irsend.sendPanasonic(PanasonicAddress,PanasonicDecision); // This should turn your TV on and off
      break;
      default:
      {
      }
    }
  }

//  irsend.sendPanasonic(PanasonicAddress,code); // This should turn your TV on and off
//  delay(10);
//  irsend.sendPanasonic(PanasonicAddress,code); // This should turn your TV on and off
  
  delay(500);
}


