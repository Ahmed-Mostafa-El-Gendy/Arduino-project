/*
  *File        : traffic light 
  *Information : using 3 leds with resistor RED/ Yellow / Green   
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 25 / 4 / 2023 
 */ 
#define LEDG 8
#define LEDY 9
#define LEDR 10
void setup() 
{
  pinMode(LEDG,OUTPUT);
  pinMode(LEDY,OUTPUT);
  pinMode(LEDR,OUTPUT);
}

void loop() 
{
  digitalWrite(LEDG,1);
  digitalWrite(LEDY,0);
  digitalWrite(LEDR,0);
  delay(2000);
  digitalWrite(LEDG,0);
  digitalWrite(LEDY,1);
  digitalWrite(LEDR,0);
  delay(1000);
  digitalWrite(LEDG,0);
  digitalWrite(LEDY,0);
  digitalWrite(LEDR,1);
  delay(500);  
}
