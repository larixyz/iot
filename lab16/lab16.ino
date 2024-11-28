#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd1.init();
  lcd1.backlight();
  lcd1.setCursor(0,0);
  lcd1.display();
}

void loop() {
  int valorrecebido = analogRead(A0);
  if (valorrecebido > 0) {
	lcd1.setCursor(5,0);
    lcd1.print("texto"); 
  }
 
}