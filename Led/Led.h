#ifndef LED_H
#define LED_H

#pragma once

#include <Arduino.h>

class Led
{
protected:
    // 멤버 변수
    int pin;

public:
    Led(int pin); // 생성자

    void on();
    void off();
    void toggle();
    void blink(int delay_time = 0);
    void setValue(int value);

private:
};

#endif