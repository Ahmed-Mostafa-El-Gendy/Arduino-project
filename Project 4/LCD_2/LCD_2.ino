/*
  *File        : LCD 
  *Information : using LCD to shown the data on screen.    
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 26 / 4 / 2023 
*/
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.print("u must be strong");
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.display();
delay(100);
lcd.noDisplay();
delay(100);

}
