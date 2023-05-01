/*
  *File        : led 
  *Information : using led with resistor only 
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 25 / 4 / 2023 
 */ 
#define led 13 
void setup() {
  // put your setup code here, to run once:
pinMode(led , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,1);
delay(500);
digitalWrite(led,0);
delay(500);
}
