// C++ code
//
const int ledPin = 9;

void setup() {
pinMode(9,OUTPUT);
}

void loop() {
  int valorrecebido = analogRead(A0);
  
   if(valorrecebido > 0){
  digitalWrite(9, HIGH);  // Liga a lâmpada (LED)
    delay(300);                  // Aguarda 300 milissegundos
    digitalWrite(9, LOW);   // Desliga a lâmpada (LED)
    delay(300);  
  }
 
  }

  



 

