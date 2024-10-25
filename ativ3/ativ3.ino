int tempo = 0;
2.
3. void setup()
4. {
5. // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
6. pinMode(LED_BUILTIN, OUTPUT);
7. tempo = 1000;
8. }
9.
10. void loop()
11. {
12. delay(tempo); // Aguarda 1000 milésimos de segundo
13. digitalWrite(LED_BUILTIN, LOW); //Desliga o LED
14. delay(tempo); // Aguarda 1000 milésimos de segundo
15. digitalWrite(LED_BUILTIN, HIGH); //Liga o LED
16. }
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
