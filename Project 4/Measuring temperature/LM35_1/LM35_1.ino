/*
  *File        : LM35 
  *Information : using sensor analog LM35 to measuring tempreture     
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 26 / 4 / 2023 
*/
#define LM A0
int tem_levels=0 ;
float tem_volt =0;
float tem_value ;   
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LM,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tem_levels  = analogRead(LM);
delay(500);
tem_volt=tem_levels*(5.0/1023.0);
tem_value=tem_volt/0.01;
Serial.print(tem_value);
Serial.println("   Celsuis  ");

}
