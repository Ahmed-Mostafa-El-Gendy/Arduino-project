/*
  *File        : analog led 
  *Information : using led with resistor by pwm to make it analog  
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 25 / 4 / 2023 
 */ 
#define led 11 
int i = 0 ;
int j = 255 ;  
void setup() {
  // put your setup code here, to run once:
pinMode(led , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(i=0;i<255;i++) 
{
  analogWrite(led,i);
  delay(10);
}
  for(j=255;j>=0;j--)
  {
  analogWrite(led,j);
  delay(10); 
  }
}
