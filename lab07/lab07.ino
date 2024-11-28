// C++ code
//
 int foto = A0;
 int ledPin = 9; 


void setup() {
  pinMode(ledPin, OUTPUT);
 pinMode(foto,INPUT);
}

void loop() {
 int fotoValor = analogRead(foto);
  if (fotoValor >=  1022){
    digitalWrite(ledPin,HIGH);
  }else{
  digitalWrite(ledPin,LOW);
  }
}           

 

