int luminosidade = 0;
void setup()
{
pinMode(A0, INPUT);
}
void loop()
{
luminosidade = analogRead(A0);
Serial.println(luminosidade);
delay(10);
}
