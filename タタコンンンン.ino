const int threshold0 = 100;//CL
const int threshold1 = 100;//CR
const int threshold2 = 100;//RL
const int threshold3 = 100;//RR

#include <Keyboard.h>

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  Keyboard.begin();
}

void CL () {
  if (analogRead(A0) >= threshold0)
  {
    Keyboard.press('k'); 
    delay(100);
  }
  else
  {
    Keyboard.releaseAll();
  }
}

void CR () {
  if (analogRead(A1) >= threshold1)
  {
    Keyboard.press('f');
    delay(100);
  }
  else
  {
    Keyboard.releaseAll();
  }  
}

void RL () {
  if (analogRead(A2) >= threshold2)
  {
    Keyboard.press('j');
    delay(100);
  }
    else
  {
    Keyboard.releaseAll();
  }
}

void RR () {
  if (analogRead(A3) >= threshold3)
  {
    Keyboard.press('d');
    delay(100);
  }
  else
  {
    Keyboard.releaseAll();
  }  
}

void loop() {
  CL();
  CR();
  RL();
  RR();
}

