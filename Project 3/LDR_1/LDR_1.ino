/*
  *File        : LDR1  
  *Information : LRD with resistor only    
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 25 / 4 / 2023 
*/
#define LDR A0 
float val ;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LDR,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(LDR);
Serial.print("val= ");
Serial.println(val);
delay(500);
}
