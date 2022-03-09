#include "DCMotor.h"

DCMotor::DCMotor(int en, int in1, int in2)
    : en(en), in1(in1), in2(in2)
{
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void DCMotor::forward(int speed)
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(en, speed);
}

void DCMotor::backward(int speed)
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(en, speed);
}

void DCMotor::stop()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(en, 0);
}
