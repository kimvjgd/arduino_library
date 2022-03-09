#include "Car.h"

Car::Car(int ena, int in1, int in2, int enb, int in3, int in4)
    : left(ena, in1, in2), right(enb, in3, in4)
{
}

void Car::forward(int speed)
{
  left.forward(speed);
  right.forward(speed);
}

void Car::backward(int speed)
{
  left.backward(speed);
  right.backward(speed);
}

void Car::turn_left(int speed)
{
  left.backward(speed);
  right.forward(speed);
}

void Car::turn_right(int speed)
{

  left.forward(speed);
  right.backward(speed);
}

void Car::stop()
{
  left.stop();
  right.stop();
}
