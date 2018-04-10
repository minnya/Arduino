#include<TimerOne.h>
#include<LiquidCrystal.h>
int sig[3] = {0}, i, moji[3];
void flash() {
  static boolean sw=HIGH;
  if(i==0)tone(9, 40000);
  else noTone(9);
  i++;
  if(i>3)i=0;
}

void setup() {
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Timer1.initialize(5000);
  Timer1.attachInterrupt(flash);
}
void loop() {
  if (digitalRead(8) == LOW) digitalWrite(13, HIGH);
    else digitalWrite(13, LOW);
    }
