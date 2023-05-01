 
 /*
  *File        : RGB LED more colour  
  *Information : RGB LED CONTINS 3 leds with resistor RED / blue / Green   
  *Autor       : Ahmed Mostafa El Gendy
  *Date        : 25 / 4 / 2023  
  *
  */
 int redPin = 11;
 int greenPin = 10;
 int bluePin = 9;
void setup()
{
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
} 

void loop()
{
  setColor(255, 0, 0); 
  delay(2000);
  setColor(0, 255, 0); 
  delay(2000);
  setColor(0, 0, 255); 
  delay(2000);
  setColor(255, 255, 0); 
  delay(2000);
  setColor(80, 0, 80); 
  delay(2000);
  setColor(0, 255, 255); 
  delay(2000);
}
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
