/*
  *File        : RGB LED  
  *Information : RGB LED CONTINS 3 leds with resistor RED / blue / Green   
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 25 / 4 / 2023 
 */ #define Red 13 
#define blue 12  
#define Green 11


void setup()
{
  pinMode(Red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(Green,OUTPUT);
}

void loop()
{
  digitalWrite(Red,1);
  digitalWrite(blue,0);
  digitalWrite(Green,0);
  delay(1000); 
  
  digitalWrite(Red,0); 
  digitalWrite(blue,1);
  digitalWrite(Green,0);
  delay(1000); 
  
  digitalWrite(Red,0);
  digitalWrite(blue,0);
  digitalWrite(Green,1);
  delay(1000); 
}
