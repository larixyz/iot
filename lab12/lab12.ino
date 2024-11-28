int button = 12;
int transistor = A0;
int poten = A1;

void setup()
{
    pinMode(button, INPUT);
    pinMode(poten, INPUT);
    pinMode(transistor, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int buttonState = digitalRead(button);
    int potenValue = analogRead(poten);
    int veloMotor = map(potenValue, 0, 1023, 0 ,255);

    if(buttonState == HIGH){
        Serial.println("Apertando");
        analogWrite(transistor, potenValue);
    }else{
        analogWrite(transistor, 0);
    }
}