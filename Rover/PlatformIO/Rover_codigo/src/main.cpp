#include <Arduino.h>

int motor1Avanzar = 0;
int motor1Atras = 1;
int motor2Avanzar = 2;
int motor2Atras = 3;
int espera = 3000;

int ledAdelante = 5;
int ledAtras = 6;
int ledDerecha = 7;
int ledIzquierda = 8;

void InicializarMotores(){
  pinMode(motor1Avanzar, OUTPUT);
  pinMode(motor1Atras, OUTPUT);
  pinMode(motor2Avanzar, OUTPUT);
  pinMode(motor2Atras, OUTPUT);
}

void inicializarLeds() {
  pinMode(ledAdelante, OUTPUT);
  pinMode(ledAtras, OUTPUT);
  pinMode(ledDerecha, OUTPUT);
  pinMode(ledIzquierda, OUTPUT);
}

void MotoresAvanzar(int velocidad){
  // Avanzar (Motor 1 adelante, Motor 2 adelante)
  digitalWrite(ledAdelante, 1);
  digitalWrite(ledAtras, 0);
  digitalWrite(ledDerecha, 0);
  digitalWrite(ledIzquierda, 0);
  
  analogWrite(motor1Avanzar, velocidad);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avanzar, velocidad);
  analogWrite(motor2Atras, 0);
}

void MotoresRetroceder(int velocidad){
  // Retroceder (Motor 1 atrás, Motor 2 atrás)
  digitalWrite(ledAdelante, 0);
  digitalWrite(ledAtras, 1);
  digitalWrite(ledDerecha, 0);
  digitalWrite(ledIzquierda, 0);
    
  analogWrite(motor1Avanzar, 0);
  analogWrite(motor1Atras, velocidad);
  analogWrite(motor2Avanzar, 0);
  analogWrite(motor2Atras, velocidad);
}

void MotoresDerecha(int velocidad){
  // Girar a la Derecha (Motor 1 adelante, Motor 2 atrás)
  digitalWrite(ledAdelante, 0);
  digitalWrite(ledAtras, 0);
  digitalWrite(ledDerecha, 1);
  digitalWrite(ledIzquierda, 0);
  
  analogWrite(motor1Avanzar, velocidad);
  analogWrite(motor1Atras, 0);
  analogWrite(motor2Avanzar, 0);
  analogWrite(motor2Atras, velocidad);
}

void MotoresIzquierda(int velocidad){
  // Girar a la izquierda (Motor 1 atrás, Motor 2 adelante)
  digitalWrite(ledAdelante, 0);
  digitalWrite(ledAtras, 0);
  digitalWrite(ledDerecha, 0);
  digitalWrite(ledIzquierda, 1);
  
  analogWrite(motor1Avanzar, 0);
  analogWrite(motor1Atras, velocidad);
  analogWrite(motor2Avanzar, velocidad);
  analogWrite(motor2Atras, 0);
}

void setup() {
  InicializarMotores();
  inicializarLeds();

}

void loop() {
  int velocidad = 128;  // Velocidad PWM, modularion para futura implementacion de movimiento con velocidad variable.

  MotoresAvanzar(velocidad);
  delay(espera);
  MotoresRetroceder(velocidad);
  delay(espera);
  MotoresDerecha(velocidad);
  delay(espera);
  MotoresIzquierda(velocidad);
  delay(espera);
}
