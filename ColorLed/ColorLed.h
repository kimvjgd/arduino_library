#ifndef COLORLED_H
#define COLORLED_H

#pragma once
#include <PWMLed.h>

#include <Arduino.h>

class ColorLed
{

protected:
    PWMLed red;
    PWMLed green;
    PWMLed blue;

public:
    ColorLed(int red, int green, int blue);
    void rgb(int r, int g, int b);
    void off(int delay_time = 0);
    void random();
};

#endif