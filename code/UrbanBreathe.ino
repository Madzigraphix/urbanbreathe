
#include <LiquidCrystal.h>
LiquidCrystal lcd(5,4,3,2,1,0);

const int sensorPin = A0;
const int ledGreen = 6;
const int ledRed = 7;
const int buzzerPin = 8;


int sensorData = 0;

void setup() {
  pinMode (sensorPin, INPUT);
  pinMode (ledGreen, OUTPUT);
  pinMode (ledRed, OUTPUT);
  pinMode (buzzerPin, OUTPUT);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, LOW);
  digitalWrite(buzzerPin, LOW);
//default lcd message
  lcd.clear();
  lcd.begin (16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Urban Breath");
  delay(1000);
}

void loop() {
  sensorData = analogRead(sensorPin);
  lcd.setCursor(0, 0);
  lcd.print("Air Quality: ");
  lcd.print(sensorData);

  if (sensorData <= 50)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Air Quality: ");
    lcd.print(sensorData);
    lcd.setCursor(0, 1);
    lcd.print("AQI Good");
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  
 
  else if (sensorData >= 301)
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Air Quality: ");
    lcd.print(sensorData);
    lcd.setCursor(0, 1);
    lcd.print("AQI Hazardous");
     digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
  delay (700);
}
