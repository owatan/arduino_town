#include "beat.h"
#include "tone.h"
#define PIN 13

void setup(){
}

void sound(double high, double length){
  tone(PIN, high, length);
  delay(length);
}

void loop(){
  // http://www.nicovideo.jp/watch/sm7767717

  sound(_G4, _2); // 1
  delay(_16);
  sound(_D4, _16);
  sound(_E4, _8);
  sound(_G4, _8);
  sound(_E4, _16);
  sound(_G4, _16);

  sound(_A4, _8 + _16); //2
  sound(_B4, _8 + _16);
  sound(_G4, _8);
  sound(_A4, _8 + _16);
  sound(_B4, _8 + _16);
  sound(_G4, _8);

  sound(_D5, _2); // 3
  delay(_16);
  sound(_C5, _16);
  sound(_B4, _8);
  sound(_D5, _8);
  sound(_C5, _16);
  sound(_B4, _16);

  sound(_G4, _2 + _4 + _8); // 4
  delay(_8);

  sound(_G4, _16); // 5
  delay(_16);
  sound(_G4, _16);
  delay(_16);
  sound(_G4, _8 + _16);
  sound(_C5, _16);
  delay(_16);
  sound(_C5, _16);
  delay(_16);
  sound(_C5, _16);
  sound(_C5, _4);

  sound(_G4, _16); // 6
  delay(_16);
  sound(_G4, _16);
  delay(_16);
  sound(_G4, _8 + _16);
  sound(_C5, _16);
  delay(_16);
  sound(_C5, _16);
  delay(_16);
  sound(_C5, _16);
  sound(_C5, _4);

  sound(_A4, _16); // 7
  delay(_16);
  sound(_A4, _16);
  delay(_16);
  sound(_A4, _8 + _16);
  sound(_D5, _16);
  delay(_16);
  sound(_D5, _16);
  delay(_16);
  sound(_D5, _16);
  sound(_D5, _4);

  sound(_A4, _16); // 8
  delay(_16);
  sound(_A4, _16);
  delay(_16);
  sound(_A4, _8 + _16);
  sound(_D5, _16);
  delay(_16);
  sound(_D5, _16);
  delay(_16);
  sound(_D5, _16);
  sound(_D5, _4);

  sound(_G4, _4); // 9
  delay(_4);
  sound(_G3, _4);
  delay(_8 + _16);
  sound(_G3, _16);

  sound(_G3, _8); // 10
  delay(_16);
  sound(_G3, _16);
  sound(_G3, _8);
  delay(_16);
  sound(_G3, _16);
  sound(_G3, _4);
  delay(_8);
  sound(_D4, _16);
  sound(_G3, _16);
}
