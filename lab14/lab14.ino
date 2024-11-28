#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
const int ledPin(12);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Pronto");
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int valorrecebido = digitalRead(13);
  if (valorrecebido > 0) {
    lcd.clear();
    lcd.setCursor(5,0);
    lcd.print("Detectou");
    digitalWrite(ledPin, HIGH);
    delay(500); 
    digitalWrite(ledPin, LOW);
    delay(500);  
  }else{
  	lcd.clear();
    lcd.setCursor(5,0);
    lcd.print("Parou!");
  }
 delay(500);
}
