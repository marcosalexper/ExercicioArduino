1. int tempo = 0;
2.
3. void setup()
4. {
5. // Porta 13 (LED_BUILTIN) em modo de saída (escrita)
6. pinMode(13, OUTPUT);//LED VERMELHO
7. // Porta 12 em modo de saída (escrita)
8. pinMode(12, OUTPUT); // LED AMARELO
9. // Porta 11 em modo de saída (escrita)
10. pinMode(11, OUTPUT); // LED VERDE
11. tempo = 1000;
12. }
13.
14. void loop()
15. {
16. digitalWrite(13, HIGH); // Liga o LED VERMELHO
17. delay(tempo); // Aguarda 1000 milésimos de segundo
18. digitalWrite(13, LOW); // Apaga o LED VERMELHO
19. digitalWrite(11, HIGH); // Liga o LED VERDE
20. delay(tempo); // Aguarda 1000 milésimos de segundo
21. digitalWrite(11, HIGH); // Apaga o LED VERDE
22. digitalWrite(12, HIGH); // Liga o LED AMARELO
23. delay(tempo); // Aguarda 1000 milésimos de segundo
24. digitalWrite(12, LOW); // Desliga o LED AMARELO
25. }
26. int i = 0;
27.
28. void setup()
29. {
30. // Porta 11 em modo de saída (escrita)
31. pinMode(11, OUTPUT);
32. }
33.
34. void loop()
35. {
36. // Percorre de 0 até 255 com passo 5
37. for (i = 0; i <= 255; i += 5) {
38. // Escreve i na porta 11
39. analogWrite(11, i);
40. // Aguarda 50 milésimos de segundo
41. delay(50);
42. }
43. }