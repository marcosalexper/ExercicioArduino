1. // Luminosidade do fotoresistor
2. int luminosidade = 0;
3.
4. void setup()
5. {
6. // Porta 0 (Analógica) em modo de entrada(leitura) para o fotoresistor
7. pinMode(A0, INPUT);
8. }
9.
10. void loop()
11. {
12. // Leitura do fotoresistor
13. luminosidade = analogRead(A0);
14. // Saída da variável no monitor serial
15. Serial.println(luminosidade);
16. // Atrase um pouco para melhorar o desempenho da simulação
17. delay(10);
18. }