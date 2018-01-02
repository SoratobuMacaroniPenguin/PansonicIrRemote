/*
 * IRremote: PansonicSendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 * Panasonic protocol added by Kristian Lauszus (Thanks to zenwheel and other people at the original blog post)
 * 
 * 
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

int code;

void setup()
{
  Serial.begin(9800);
}

void loop() {
  if (Serial.availabel() > 0){
    switch Serial.read(){
      case "p":
        code = PanasonicPower;
      break;
      case "1":
        code = Panasonic1;
      break;
      case "2":
        code = Panasonic2;
      break;
      case "3":
        code = Panasonic3;
      break;
      case "4":
        code = Panasonic4;
      break;
      case "5":
        code = Panasonic5;
      break;
      case "6":
        code = Panasonic6;
      break;
      case "7":
        code = Panasonic7;
      break;
      case "8":
        code = Panasonic8;
      break;
      case "9":
        code = Panasonic9;
      break;
      case "10":
        code = Panasonic10;
      break;
      case "11":
        code = Panasonic11;
      break;
      case "12":
        code = Panasonic12;
      break;
      case "s":
        code = PanasonicSchedule;
      break;
      case "r":
        code = PanasonicRight;
      break;
      case "l":
        code = PanasonicLeft;
      break;
      case "d":
        code = PanasonicDecision;
      break;
      default:
      {
      }
    }
  }

  irsend.sendPanasonic(PanasonicAddress,code); // This should turn your TV on and off
  delay(10);
  irsend.sendPanasonic(PanasonicAddress,code); // This should turn your TV on and off
  
  delay(500);
}


