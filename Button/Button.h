#ifndef BUTTON_H
#define BUTTON_H

#pragma once

#include <Arduino.h>

typedef void (*button_callback_t)();
// 함수에 대한 포인터

class Button
{
protected:
    int pin;
    button_callback_t callback;
    unsigned long t1;

public:
    Button(int pin);
    void setCallback(button_callback_t callback);
    int read();
    void check();
    void attachInterrupt(button_callback_t callback, int mode = FALLING);
    bool debounce();

private:
};

#endif