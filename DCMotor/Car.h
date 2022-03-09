#ifndef CAR_H
#define CAR_H

#pragma once
#include <Arduino.h>
#include <DCMotor.h>

class Car
{
protected:
    DCMotor left;
    DCMotor right;

public:
    Car(int ena, int in1, int in2, int enb, int in3, int in4);

    void forward(int speed = 200);
    void backward(int speed = 200);
    void turn_left(int speed = 160);
    void turn_right(int speed = 160);
    void stop();

private:
};

#endif