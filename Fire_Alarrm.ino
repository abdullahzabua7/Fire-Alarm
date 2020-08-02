/* Welcome to electronics Hub of AZ.
 *  here is the program for FIRE ALARM .
 *  For connection visit my site - 
 */
int flameRead;
int flamePin = 7;
int buzzer = 8;
int alaramLED = 9;
int safetyLED = 10;

void setup()
{
  pinMode(flamePin,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(alaramLED,OUTPUT);
  pinMode(safetyLED,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  flameRead= digitalRead(flamePin);
  Serial.println(flameRead);
  if (flameRead == 1){
    digitalWrite(safetyLED,LOW);
    tone (buzzer,1000,500);
    analogWrite(alaramLED, random(120)+235);
    delay(random(40));
  }
  else {
    digitalWrite(alaramLED,LOW);
    digitalWrite(safetyLED,HIGH);
    
  }
  delay(500);
}
