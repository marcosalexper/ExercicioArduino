1. // Luminosidade do fotoresistor
2. int luminosidade = 0;
3.
4. void setup()
5. {
6. // Porta 0(Analógica) em modo de entrada (leitura) para o fotoresistor
7. pinMode(A0, INPUT);
8. // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
9. pinMode(LED_BUILTIN, OUTPUT);// LED VERMELHO
10. }
11.
12. void loop()
13. {
14. // Leitura do fotoresistor
15. luminosidade = analogRead(A0);
16. // Avalia a variável
17. if (luminosidade < 750) {
18. digitalWrite(LED_BUILTIN, HIGH); // Liga o LED VERMELHO
19. } else {
20. digitalWrite(LED_BUILTIN, LOW); // Desliga o LED VERMELHO
21. }
22. // Atrase um pouco para melhorar o desempenho da simulação
23. delay(10);
24. }