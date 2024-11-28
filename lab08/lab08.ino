// C++ code
//
const int tempPin = A0;  
const int buzzerPin = 9; 

void setup() {
  Serial.begin(9600);          
  pinMode(buzzerPin, OUTPUT);  
  digitalWrite(buzzerPin, LOW); 
}

void loop() {
  int tempValue = analogRead(tempPin);  
  float voltage = tempValue * (5.0 / 1023.0);  
  float temperatureC = (voltage - 0.5) * 100.0; 

  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  
  if (temperatureC > 30) {
    Serial.println("Alerta: Temperatura acima de 30°C!");
  }

  
  if (temperatureC > 90) {
    digitalWrite(buzzerPin, HIGH);  
    Serial.println("Alerta Crítico: Temperatura acima de 90°C! Buzzer acionado.");
  } else {
    digitalWrite(buzzerPin, LOW);  
  }

  delay(1000);  
}


 

