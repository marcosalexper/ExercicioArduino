void setup()
2. {
3. // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
4. pinMode(LED_BUILTIN, OUTPUT);
5. }
6.
7. void loop()
8. {
9. delay(1000); // Aguarda 1000 milésimos de segundo
10. digitalWrite(LED_BUILTIN, LOW); // Desliga o LED
11. delay(1000); // Aguarda 1000 milésimos de segundo
12. digitalWrite(LED_BUILTIN, HIGH); // Liga o LED
13. }
