/*
  *File        : PIR sensor  
  *Information : using sensor digital pir to detect the motion       
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 29 / 4 / 2023 
*/
#define pir 13 
bool val=0 ;
void setup()
{
  pinMode(13,INPUT);
  Serial.begin(9600);
  Serial.print("please wait");
  delay(10000);
  Serial.print("done");
  Serial.print("sensor active now ");
}

void loop()
{
 val=digitalRead(pir);
 if (val==1)
 {
 Serial.println("I find body");
 delay(1000);  
 }
  else 
  {
    Serial.println("noting here");
    delay(1000);

  
  }
}
