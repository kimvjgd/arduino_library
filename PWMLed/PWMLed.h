#ifndef PWMLED_H
#define PWMLED_H

#pragma once

#include <Arduino.h>
#include <Led.h>

class PWMLed : public Led
{
protected:
    int value;

public:
    PWMLed(int pin, int value = 0);
    void setValue(int value); // Led에 있고 재정의하겠다는 뜻

private:
};

#endif