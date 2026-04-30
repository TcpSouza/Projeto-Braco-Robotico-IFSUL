<p align="center"><img width="264" height="480" alt="Braço Robótico" src="https://github.com/user-attachments/assets/c776d10a-d255-4ff8-8f71-f5fba934806c" /></p>
# Projeto-Braco-Robotico-IFSUL
Controle de braço robótico utilizando Arduino e servos motores.

Componentes utilizados: Arduino Uno, 4 motores servo, além de protoboard e jumpers;

O código foi estruturado utilizando a biblioteca `Servo.h`. A lógica principal consiste em:
1. Definir o pontos de giro dos servos em valores.
2. Converter esses valores para ângulos (0 a 180 graus).
3. Enviar o sinal PWM para os servos motores realizarem os seus respectivos movimentos com precisão para a garra poder pegar neste caso a esfera e levar do ponto A ao ponto B.
