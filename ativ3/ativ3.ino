int tempo = 0;
void setup()
{
pinMode(LED_BUILTIN, OUTPUT);
tempo = 1000;
}

void loop()
{
delay(tempo); // Aguarda 1000 milésimos de segundo
digitalWrite(LED_BUILTIN, LOW); //Desliga o LED
delay(tempo); // Aguarda 1000 milésimos de segundo
digitalWrite(LED_BUILTIN, HIGH); //Liga o LED
}
void setup() {


}

void loop() {


}
