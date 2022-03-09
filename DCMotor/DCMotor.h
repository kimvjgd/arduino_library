#ifndef DCMOTOR_H
#define DCMOTOR_H

#pragma once

#include <Arduino.h>

class DCMotor
{
protected:
    int en;
    int in1;
    int in2;

public:
    DCMotor(int en, int in1, int in2);
    void forward(int speed = 200);
    void backward(int speed = 200);
    void stop();
};

#endif