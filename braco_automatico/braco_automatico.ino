#include <Servo.h>

struct posicao_braco
{
  char servo1;
  char servo2;
  char servo3;
  char servo4;
  //char servo5;

};


posicao_braco P1 = {.servo1 = 0, .servo2 = 180, .servo3 = 115, .servo4 = 55};
posicao_braco P2 = {.servo1 = 0, .servo2 = 180, .servo3 = 55, .servo4 = 55};
posicao_braco P3 = {.servo1 = 0, .servo2 = 180, .servo3 = 55, .servo4 = 35};
posicao_braco P4 = {.servo1 = 0, .servo2 = 180, .servo3 =115, .servo4 = 35};
posicao_braco P5 = {.servo1 = 95, .servo2 = 180, .servo3 = 115, .servo4 = 35};
posicao_braco P6 = {.servo1 = 95, .servo2 = 180, .servo3 = 145, .servo4 = 55};
//posicao_braco P7 = {.servo1 = 0, .servo2 = 0, .servo3 = 90, .servo4 = 30};
//posicao_braco P8 = {.servo1 = 0, .servo2 = 90, .servo3 = 0, .servo4 = 30};
//posicao_braco P9 = {.servo1 = 0, .servo2 = 0, .servo3 = 90, .servo4 = 30};
//posicao_braco P10 = {.servo1 = 0, .servo2 = 0, .servo3 = 0, .servo4 = 30};
//posicao_braco P11 = {.servo1 = 0, .servo2 = 0, .servo3 = 0, .servo4 = 30};
//posicao_braco P12 = {.servo1 = 0, .servo2 = 0, .servo3 = 0, .servo4 = 30};
//posicao_braco P13 = {.servo1 = 0, .servo2 = 0, .servo3 = 0, .servo4 = 30};
//posicao_braco P14 = {.servo1 = 0, .servo2 = 0, .servo3 = 90, .servo4 = 30};
//posicao_braco P15 = {.servo1 = 0, .servo2 = 0, .servo3 = 0, .servo4 = 30};



Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
//Servo servo5;

void move_robo(posicao_braco pos)
{
  servo1.write(pos.servo1);
  servo2.write(pos.servo2);
  servo3.write(pos.servo3);
  servo4.write(pos.servo4);
  //servo5.write(pos.servo5);
}


void setup()
{
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  //servo5.attach(6);

}

void loop()
{
  servo1.write(P1.servo1);
  servo2.write(P1.servo2);
  servo3.write(P1.servo3);
  servo4.write(P1.servo4);
  //servo5.write(P1.servo5);
  move_robo(P1);
  delay(2000);

  servo1.write(P2.servo1);
  servo2.write(P2.servo2);
  servo3.write(P2.servo3);
  servo4.write(P2.servo4);
  //servo5.write(P2.servo5);
  move_robo(P2);
  delay(2000);

  servo1.write(P3.servo1);
  servo2.write(P3.servo2);
  servo3.write(P3.servo3);
  servo4.write(P3.servo4);
  //servo5.write(P3.servo5);
  move_robo(P3);
  delay(2000);

  servo1.write(P4.servo1);
  servo2.write(P4.servo2);
  servo3.write(P4.servo3);
  servo4.write(P4.servo4);
  //servo5.write(P4.servo5);
  move_robo(P4);
  delay(2000);

  servo1.write(P5.servo1);
  servo2.write(P5.servo2);
  servo3.write(P5.servo3);
  servo4.write(P5.servo4);
  //servo5.write(P5.servo5);
  move_robo(P5);
  delay(2000);

  servo1.write(P6.servo1);
  servo2.write(P6.servo2);
  servo3.write(P6.servo3);
  servo4.write(P6.servo4);
  //servo5.write(P6.servo5);
  move_robo(P6);
  delay(2000);

  servo1.write(P1.servo1);
  servo2.write(P1.servo2);
  servo3.write(P1.servo3);
  servo4.write(P1.servo4);
  //servo5.write(P7.servo5);
  move_robo(P1);
  delay(2000);

  /*servo1.write(P8.servo1);
  servo2.write(P8.servo2);
  servo3.write(P8.servo3);
  servo4.write(P8.servo4);
  //servo5.write(P8.servo5);
  move_robo(P8);
  delay(2000);

  servo1.write(P9.servo1);
  servo2.write(P9.servo2);
  servo3.write(P9.servo3);
  servo4.write(P9.servo4);
  //servo5.write(P9.servo5);
  move_robo(P9);
  delay(2000);

  servo1.write(P10.servo1);
  servo2.write(P10.servo2);
  servo3.write(P10.servo3);
  servo4.write(P10.servo4);
  //servo5.write(P10.servo5);
  move_robo(P10);
  delay(2000);

  servo1.write(P11.servo1);
  servo2.write(P11.servo2);
  servo3.write(P11.servo3);
  servo4.write(P11.servo4);
  //servo5.write(P11.servo5);
  move_robo(P11);
  delay(2000);

  servo1.write(P12.servo1);
  servo2.write(P12.servo2);
  servo3.write(P12.servo3);
  servo4.write(P12.servo4);
  //servo5.write(P12.servo5);
  move_robo(P12);
  delay(2000);

  servo1.write(P13.servo1);
  servo2.write(P13.servo2);
  servo3.write(P13.servo3);
  servo4.write(P13.servo4);
  //servo5.write(P13.servo5);
  move_robo(P13);
  delay(2000);

  servo1.write(P14.servo1);
  servo2.write(P14.servo2);
  servo3.write(P14.servo3);
  servo4.write(P14.servo4);
  //servo5.write(P14.servo5);
  move_robo(P14);
  delay(2000);
  
  servo1.write(P15.servo1);
  servo2.write(P15.servo2);
  servo3.write(P15.servo3);
  servo4.write(P15.servo4);
  //servo5.write(P15.servo5);
  move_robo(P15);
  delay(2000);*/
}
