int tempo = 0;
void setup()
{
pinMode(LED_BUILTIN, OUTPUT);
pinMode(12, OUTPUT);
tempo = 1000;
}

void loop()
{
delay(tempo);
digitalWrite(LED_BUILTIN, LOW);
delay(tempo);
digitalWrite(12, HIGH);
delay(tempo);
digitalWrite(LED_BUILTIN, HIGH);
delay(tempo);
digitalWrite(12, LOW);
}
