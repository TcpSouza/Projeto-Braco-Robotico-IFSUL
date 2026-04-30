int sensor_ldr = 7;
int red =  2;      
int blue =  3; 
int green =  4; 
int ldr = 0;

void setup() {
  // define o pino relativo ao rele de saida

  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT); 
  pinMode(green, OUTPUT);
  pinMode(sensor_ldr, INPUT);
}

void loop() {
  // lê o estado do sensor e armazena na variavel leitura
  ldr = analogRead(sensor_ldr);

      digitalWrite(red, HIGH);
      digitalWrite(blue, LOW);
      digitalWrite(green, LOW);
      delay(100);

       digitalWrite(blue,HIGH );
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      delay(100);

      digitalWrite(green,HIGH );
      digitalWrite(red, LOW);
      digitalWrite(blue, LOW);
      delay(100);                           
      
      Serial.println(ldr);
      delay(500);
  }
  


