int tempo = 0;
void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);

pinMode(11, OUTPUT);
tempo = 1000;
}

void loop()
{
digitalWrite(13, HIGH);
delay(tempo);
digitalWrite(13, LOW);
digitalWrite(11, HIGH);
delay(tempo);
digitalWrite(11, HIGH);
digitalWrite(12, HIGH);
delay(tempo);
digitalWrite(12, LOW);
}
int i = 0;

void setup()
{

pinMode(11, OUTPUT);
}
void loop()
{

for (i = 0; i <= 255; i += 5) {
analogWrite(11, i);

delay(50);
}
}
