/*
  *File        : LM35 with lcd  
  *Information : using sensor analog LM35 to measuring tempreture and lcd to shown the temp on screen      
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 26 / 4 / 2023 
*/
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#define LM A0
int tem_levels=0 ;
float tem_volt =0;
float tem_value ;   
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(2,0);
lcd.print("tempreture: ");
pinMode(LM,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

tem_levels  = analogRead(LM);
delay(500);
tem_volt=tem_levels*(5.0/1023.0);
tem_value=tem_volt/0.01;
lcd.setCursor(0,1);
lcd.scrollDisplayLeft();
lcd.print(tem_value);
lcd.print("   Celsuis");

}
