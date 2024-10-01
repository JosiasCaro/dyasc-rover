#include <Arduino.h>

int motor1Avanzar = 4;
int motor1Atras = 16;
int motor2Avanzar = 17;
int motor2Atras = 5;
int espera = 1500;

void InicializarMotores(){
  pinMode(motor1Avanzar, OUTPUT);
  pinMode(motor1Atras, OUTPUT);
  pinMode(motor2Avanzar, OUTPUT);
  pinMode(motor2Atras, OUTPUT);
}

void InicializarSerial(){
  Serial.begin(9600);
}

void Reposo(){
  // Retroceder (Motor 1 atrás, Motor 2 atrás)
  analogWrite(motor1Avanzar, 0);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avanzar, 0);
  analogWrite(motor2Atras, 0);

  Serial.println("Reposo");
}

void DesplazarceAdelante(int velocidad, int duracion){
  // Avanzar (Motor 1 adelante, Motor 2 adelante)
  analogWrite(motor1Avanzar, velocidad);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avanzar, velocidad);
  analogWrite(motor2Atras, 0);

  Serial.println("Motor Adelante");

  delay(duracion);

  Reposo();
}

void DesplazarceAtras(int velocidad, int duracion){
  // Retroceder (Motor 1 atrás, Motor 2 atrás)
  analogWrite(motor1Avanzar, 0);
  analogWrite(motor1Atras, velocidad);
  analogWrite(motor2Avanzar, 0);
  analogWrite(motor2Atras, velocidad);

  Serial.println("Motor Atras");

  delay(duracion);

  Reposo();
}

void GirarDerecha(int velocidad, int duracion){
  // Girar a la Derecha (Motor 1 adelante, Motor 2 atrás)
  analogWrite(motor1Avanzar, velocidad);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avanzar, 0);
  analogWrite(motor2Atras, velocidad);
  
  Serial.println("Motor Derecha");

  delay(duracion);

  Reposo();
}

void GirarIzquierda(int velocidad, int duracion){
  // Girar a la izquierda (Motor 1 atrás, Motor 2 adelante)
  analogWrite(motor1Avanzar, 0);
  analogWrite(motor1Atras, velocidad);
  analogWrite(motor2Avanzar, velocidad);
  analogWrite(motor2Atras, 0);

  Serial.println("Motor Izquierda");

  delay(duracion);

  Reposo();
}

void setup() {
  InicializarMotores();
  InicializarSerial();
}

void loop() {
  int velocidad = 200;  // Velocidad PWM, modularion para futura implementacion de movimiento con velocidad variable.

  DesplazarceAdelante(velocidad, espera);
  delay(espera);
  DesplazarceAtras(velocidad, espera);
  delay(espera);
  GirarDerecha(velocidad, espera);
  delay(espera);
  GirarIzquierda(velocidad, espera);
  delay(espera);
}
