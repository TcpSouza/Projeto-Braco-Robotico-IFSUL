#include <Servo.h>

#define DELAY 300 // delay entre pontos

#define DELAY_SERVO1  6
#define DELAY_SERVO2  10
#define DELAY_SERVO3  10
#define DELAY_SERVO4  10
#define DELAY_SERVO5  5
#define SENSOR   7

struct posicao_braco
{
  char servo1;
  char servo2;
  char servo3;
  char servo4;
  
};

posicao_braco P[] = {
 {.servo1 =  1,  .servo2 =  115, .servo3 = 60,  .servo4 = 55},
 {.servo1 =  1, .servo2 =  105, .servo3 = 80,  .servo4 = 55},
 {.servo1 =  1, .servo2 =  95, .servo3 = 80,  .servo4 = 55},
 {.servo1 =  1, .servo2 =  75, .servo3 = 80,  .servo4 = 55},
 {.servo1 =  1, .servo2 =  55, .servo3 = 80,  .servo4 = 55},
 {.servo1 =  1, .servo2 =  45, .servo3 = 95,  .servo4 = 55},
 {.servo1 =  1, .servo2 =  39, .servo3 = 92,  .servo4 = 55},
 {.servo1 =  1, .servo2 =  39, .servo3 = 92,  .servo4 = 30},
 {.servo1 =  1, .servo2 =  115, .servo3 = 60,  .servo4 = 30},
 {.servo1 =  104, .servo2 =  115, .servo3 = 55,  .servo4 = 30},
 {.servo1 =  104, .servo2 =  75, .servo3 = 45,  .servo4 = 30},
 {.servo1 =  104, .servo2 =  65, .servo3 = 45,  .servo4 = 30},
 {.servo1 =  104, .servo2 =  65, .servo3 = 45,  .servo4 = 85},
 {.servo1 =  104, .servo2 =  65, .servo3 = 45,  .servo4 = 85},

};
// numero de pontos do array acima posicao_braco[]
int num_pontos = sizeof(P) / sizeof(posicao_braco); 

// guarda os angulos atuais de cada servo
int ang_servo1, ang_servo2, ang_servo3, ang_servo4;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void move_robo(posicao_braco pos)
{
  while(1)  // move servo1
  {
    if(pos.servo1 > ang_servo1)
      ang_servo1++;
    else if(pos.servo1 < ang_servo1)
      ang_servo1--;
    else break;

    servo1.write(ang_servo1);
    delay(DELAY_SERVO1);    
  }

  while(1)  // move servo2
  {
    if(pos.servo2 > ang_servo2)
      ang_servo2++;
    else if(pos.servo2 < ang_servo2)
      ang_servo2--;
    else break;

    servo2.write(ang_servo2);
    delay(DELAY_SERVO2);    
  }

  while(1)  // move servo3
  {
    if(pos.servo3 > ang_servo3)
      ang_servo3++;
    else if(pos.servo3 < ang_servo3)
      ang_servo3--;
    else break;

    servo3.write(ang_servo3);
    delay(DELAY_SERVO3);    
  }

  while(1)  // move servo4
  {
    if(pos.servo4 > ang_servo4)
      ang_servo4++;
    else if(pos.servo4 < ang_servo4)
      ang_servo4--;
    else break;

    servo4.write(ang_servo4);
    delay(DELAY_SERVO4);    
  }

}

void setup()
{

  pinMode(SENSOR,INPUT);
  
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(8);
  
  // No reset manda para o ponto inicial P0
  servo1.write(P[0].servo1);
  ang_servo1 = P[0].servo1;
  delay(300);
  servo2.write(P[0].servo2);
  ang_servo2 = P[0].servo2;
  delay(300);
  servo3.write(P[0].servo3);
  ang_servo3 = P[0].servo3;
  delay(300);
  servo4.write(P[0].servo4);
  ang_servo4 = P[0].servo4;
  delay(300);
  
}

void loop()
{
  int i;
  {
    if (digitalRead(SENSOR) == LOW)
    {
        // movimento de ida
         for(i=0; i < num_pontos; i++)
      {
          move_robo( P[i] );
           //delay(DELAY);
      }
    }
  }
}
