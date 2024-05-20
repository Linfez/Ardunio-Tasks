#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {                           
    int come = Serial.read(); 

    if (come == '1')
    {
      Serial.println("LED1亮");
      digitalWrite(A1, HIGH);
    }
    else if (come == '2')
    {
      Serial.println("LED2亮");
      digitalWrite(A2, HIGH);
    }
    else if (come == '3')
    {
      Serial.println("LED1灭");
      digitalWrite(A1, LOW);
    }
    else if (come == '4')
    {
      Serial.println("LED2灭");
      digitalWrite(A2, LOW);
    }
  }
}
