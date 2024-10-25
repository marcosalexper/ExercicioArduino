int tempo = 0;
2.
3. void setup()
4. {
5. // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
6. pinMode(LED_BUILTIN, OUTPUT);// LED VERMELHO
7. // Porta 12 em modo de saída (escrita)
8. pinMode(12, OUTPUT); // LED VERDE
9. tempo = 1000;
10. }
11.
12. void loop()
13. {
14. delay(tempo); // Aguarda 1000 milésimos de segundo
15. digitalWrite(LED_BUILTIN, LOW); // Desliga o LED VERMELHO
16. delay(tempo); //Aguarda 1000 milésimos de segundo
17. digitalWrite(12, HIGH); // Liga o LED VERDE
18. delay(tempo); // Aguarda 1000 milésimos de segundo
19. digitalWrite(LED_BUILTIN, HIGH); // Liga o LED VERMELHO
20. delay(tempo); // Aguarda 1000 milésimos de segundo
21. digitalWrite(12, LOW); // Desliga o LED VERDE
22. }
