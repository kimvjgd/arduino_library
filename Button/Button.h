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

public:
    Button(int pin);
    void setCallback(button_callback_t callback);
    int read();
    void check();

private:
};

#endif