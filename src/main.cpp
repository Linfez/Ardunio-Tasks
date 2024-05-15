#include <Arduino.h>

int ledPins[] = {A0, A1, A2, A3, A4, A5};         // 使用模拟引脚A1到A5控制LED
int numberOfLeds = sizeof(ledPins) / sizeof(int); // LED的数量

void setup()
{
  // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
  for (int i = 0; i < numberOfLeds; i++)
    pinMode(ledPins[i], OUTPUT);
}

void loop()
{
  // 来回for循环，设置好起止点
  for (int i = 0; i < numberOfLeds; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = numberOfLeds - 1; i >= 0; i--)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
}
