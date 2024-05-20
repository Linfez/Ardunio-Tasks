#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 4, 5, 6, 7);
void setup()
{

  lcd.begin(16, 2); // 设置LCD要显示的列数、行数，即2行16列
  lcd.clear();
  lcd.print("Hello, World!");
}

void loop()
{
  lcd.setCursor(0, 1); // 设置光标定位到第0列，第1行（从0开始）
}