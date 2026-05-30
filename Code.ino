#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

int sensorPin = A0;

int greenLED = 2;
int yellowLED = 3;
int redLED = 4;

int buzzer = 5;

void setup()
{
  Serial.begin(9600);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  lcd.begin(16, 2);

  // Starting message
  lcd.print("Temp Monitor");
  delay(2000);

  lcd.clear();
}

void loop()
{
  // Read sensor value
  int value = analogRead(sensorPin);

  // Convert reading to voltage
  float voltage = value * (5.0 / 1023.0);

  // LM35 temperature calculation
  float tempC = (voltage - 0.5) * 100;

  // Show temperature in serial monitor
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" C");

  // Update LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(tempC);
  lcd.print(" C");

  // Check temperature range
  if (tempC < 25)
  {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    noTone(buzzer);

    lcd.setCursor(0, 1);
    lcd.print("NORMAL");
  }
  else if (tempC >= 25 && tempC <= 30)
  {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);

    noTone(buzzer);

    lcd.setCursor(0, 1);
    lcd.print("MODERATE");
  }
  else
  {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("HIGH TEMP!");

    // Buzzer only for very high temperature
    if (tempC > 35)
    {
      tone(buzzer, 1000);
    }
    else
    {
      noTone(buzzer);
    }
  }

  delay(1000);
}