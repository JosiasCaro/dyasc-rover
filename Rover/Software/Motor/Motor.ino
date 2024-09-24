int motor1Avanzar = 0;
int motor1Atras = 1;
int motor2Avanzar = 2;
int motor2Atras = 3;
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;

void setup() {
  pinMode(motor1Avanzar, OUTPUT);
  pinMode(motor1Atras, OUTPUT);
  pinMode(motor2Avanzar, OUTPUT);
  pinMode(motor2Atras, OUTPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  
  digitalWrite(motor1Avanzar, HIGH);
  digitalWrite(motor1Atras, LOW);
  digitalWrite(motor2Avanzar, HIGH);
  digitalWrite(motor2Atras, LOW);
  delay(5000);

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  
  
  digitalWrite(motor1Avanzar, LOW);
  digitalWrite(motor1Atras, HIGH);
  digitalWrite(motor2Avanzar, LOW);
  digitalWrite(motor2Atras, HIGH);
  delay(5000);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  
  digitalWrite(motor1Avanzar, HIGH);
  digitalWrite(motor1Atras, LOW);
  digitalWrite(motor2Avanzar, LOW);
  digitalWrite(motor2Atras, HIGH);
  delay(5000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  
  digitalWrite(motor1Avanzar, LOW);
  digitalWrite(motor1Atras, HIGH);
  digitalWrite(motor2Avanzar, HIGH);
  digitalWrite(motor2Atras, LOW);
  delay(5000);
}
