#include <Servo.h>

#define DELAY 1000
#define SENSOR   7

struct posicao_braco
{
  char servo1;
  char servo2;
  char servo3;
  char servo4;
};

posicao_braco P1 = {.servo1 =  1, .servo2 =  115, .servo3 = 60,  .servo4 = 55};
posicao_braco P2 = {.servo1 =  1, .servo2 =  105, .servo3 = 80,  .servo4 = 55};
posicao_braco P3 = {.servo1 =  1, .servo2 =  95, .servo3 = 80,  .servo4 = 55};
posicao_braco P4 = {.servo1 =  1, .servo2 =  75, .servo3 = 80,  .servo4 = 55};
posicao_braco P5 = {.servo1 =  1, .servo2 =  55, .servo3 = 80,  .servo4 = 55};
posicao_braco P6 = {.servo1 =  1, .servo2 =  45, .servo3 = 95,  .servo4 = 55};
posicao_braco P7 = {.servo1 =  1, .servo2 =  39, .servo3 = 93,  .servo4 = 55};
posicao_braco P8 = {.servo1 =  1, .servo2 =  39, .servo3 = 93,  .servo4 = 30};
posicao_braco P9 = {.servo1 =  1, .servo2 =  115, .servo3 = 60,  .servo4 = 30};
posicao_braco P10 = {.servo1 =  102, .servo2 =  115, .servo3 = 55,  .servo4 = 30};
posicao_braco P11 = {.servo1 =  102, .servo2 =  75, .servo3 = 45,  .servo4 = 30};
posicao_braco P12 = {.servo1 =  102, .servo2 =  65, .servo3 = 45,  .servo4 = 30};
posicao_braco P13 = {.servo1 =  102, .servo2 =  65, .servo3 = 45,  .servo4 = 55};
posicao_braco P14 = {.servo1 =  102, .servo2 =  65, .servo3 = 45,  .servo4 = 55};
posicao_braco P20 = {.servo1 =  45, .servo2 =  65, .servo3 = 45,  .servo4 = 55};

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void move_robo(posicao_braco pos)
{
  servo1.write(pos.servo1);
  delay(50);
  servo2.write(pos.servo2);
  delay(50);
  servo3.write(pos.servo3);
  delay(50);
  servo4.write(pos.servo4);
  delay(50);
}

void setup()
{
  pinMode(SENSOR, INPUT);
  
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(8); 
}

void loop()
{
  {
  if (digitalRead(SENSOR) == LOW)
 {
  move_robo(P1);
  delay(DELAY);

  move_robo(P2);
  delay(DELAY);

  move_robo(P3);
  delay(DELAY);

  move_robo(P4);
  delay(DELAY);

  move_robo(P5);
  delay(DELAY);

  move_robo(P6);
  delay(DELAY);

  move_robo(P7);
  delay(DELAY);

  move_robo(P8);
  delay(DELAY);

  move_robo(P9);
  delay(DELAY);

  move_robo(P10);
  delay(DELAY);

  move_robo(P11);
  delay(DELAY);

  move_robo(P12);
  delay(100);

  move_robo(P13);
  delay(100);

  move_robo(P14);
  delay(100);
  
 }
  else 
  
  move_robo(P20);
  delay(DELAY);

  }
}
