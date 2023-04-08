/*********************************************************** 
Project 11: Using LCD Display
Description: Get print something Text on Your LCD Display
Company: Texoham eLearning Platform
Website: www.texoham.com/elearning
***********************************************************/ 

#include <Wire.h>

#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27, 16, 2); // CHANGE THE 0X3F ADDRESS TO YOUR SCREEN ADDRESS IF NEEDED
//LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x3F, 16, 2); 

/**********************************************************
 Connection for I2C Module
 VCC - 5v
 Gnd- Gnd
 SDA - A4
 SCL - A5
 ***********************************************************/
void setup()
{
  lcd.begin();
  lcd.backlight();
}
void loop() 
{
  lcd.setCursor(4, 0); 
  lcd.print("KAllEDA"); 
  lcd.setCursor(4, 1); 
  lcd.print("ANVESH");
  delay(3000);
  lcd.clear();
  
  lcd.setCursor(0, 0); 
  lcd.print("cse(iot)"); 
  lcd.setCursor(0, 1); 
  lcd.print("ace engineering college");
  delay(3000);
  lcd.clear();
}
