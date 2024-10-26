void setup()
{

pinMode(11, OUTPUT);

pinMode(10, OUTPUT);

pinMode(9, OUTPUT) 
}

void loop()
{

digitalWrite(11, 255);

delay(1000);
digitalWrite(11, 0);
delay(1000);
digitalWrite(10, 255);
delay(1000);
digitalWrite(10, 0);
delay(1000);
digitalWrite(9, 255);
delay(1000);

}
