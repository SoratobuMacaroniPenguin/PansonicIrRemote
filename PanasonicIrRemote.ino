/*
 * PanasonicIrRemote Ver0.1 Jan, 2018
 * Copyright 2018 SoratobuMacaroniPenguin 
 * http://blog.goo.ne.jp/soratobu_macaronipenguin
 *
 * based on the IRremote by Ken Shirriff
 * Thanks Ken Shirriff
 */
#include <IRremote.h>
 
#define PanasonicAddress      0x555A     // Panasonic address (Pre data) 
#define PanasonicPower        0xF148688B  // Panasonic Power button
#define Panasonic1            0xF148724C  // Panasonic Channel 1
#define Panasonic2            0xF148F244  // Panasonic Channel 2
#define Panasonic3            0xF1480A43  // Panasonic Channel 3
#define Panasonic4            0xF1488A4B  // Panasonic Channel 4
#define Panasonic5            0xF1484A47  // Panasonic Channel 5
#define Panasonic6            0xF148CA4F  // Panasonic Channel 6
#define Panasonic7            0xF1482A41  // Panasonic Channel 7
#define Panasonic8            0xF148AA49  // Panasonic Channel 8
#define Panasonic9            0xF1486A45  // Panasonic Channel 9
#define Panasonic10           0xF148EA4D  // Panasonic Channel 10
#define Panasonic11           0xF1481A42  // Panasonic Channel 11
#define Panasonic12           0xF1489A4A  // Panasonic Channel 12
#define PanasonicSchedule     0xF148064F  // Panasonic Schedule button
#define PanasonicCurRight     0xF1481B8F  // Panasonic Cursole Right
#define PanasonicCurLeft      0xF148EB80  // Panasonic Cursole Left
#define PanasonicCurUp        0xF148EA81  // Panasonic Cursole Up
#define PanasonicCurDown      0xF1480481  // Panasonic Cursole Down
#define PanasonicEnter        0xF1484A8B  // Panasonic Cursole Enter
#define PanasonicVolDown      0xF148A887  // Panasonic Volume Down
#define PanasonicVolUp        0xF148288F  // Panasonic Volume Up


IRsend irsend;

unsigned long code;

void setup()
{
  Serial.begin(9800);
}

void loop() {
  if (Serial.available() > 0){
    switch (Serial.read()){
      case '1':
        code = Panasonic1;
      break;
      case '2':
        code = Panasonic2;
      break;
      case '3':
        code = Panasonic3;
      break;
      case '4':
        code = Panasonic4;
      break;
      case '5':
        code = Panasonic5;
      break;
      case '6':
        code = Panasonic6;
      break;
      case '7':
        code = Panasonic7;
      break;
      case '8':
        code = Panasonic8;
      break;
      case '9':
        code = Panasonic9;
      break;
      case 'a':
        code = Panasonic10;
      break;
      case 'b':
        code = Panasonic11;
      break;
      case 'c':
        code = Panasonic12;
      break;
      case 'd':
        code = PanasonicVolDown;
      break;
      case 'e':
        code = PanasonicEnter;
      break;
      case 'f':
        code = PanasonicCurDown;
      break;
      case 'l':
        code = PanasonicCurLeft;
      break;
      case 'p':
        code = PanasonicPower;
      break;
      case 'r':
        code = PanasonicCurRight;
      break;
      case 's':
        code = PanasonicSchedule;
      break;
      case 'u':
        code = PanasonicVolUp;
      break;
      case 'v':
        code = PanasonicCurUp;
      break;
      default:
      {
      }
    }
    irsend.sendPanasonic(PanasonicAddress,code); // This should turn your TV on and off
    delay(10);
    irsend.sendPanasonic(PanasonicAddress,code); // This should turn your TV on and off
    Serial.print(code);
  }

  
  delay(500);
}


