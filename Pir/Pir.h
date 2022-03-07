#ifndef PIR_H
#define PIR_H

#pragma once
#include <Arduino.h>

typedef void (*pir_callback_t)();

class Pir
{
protected:
    int pin;
    int state;
    pir_callback_t on_f;  // 켜질 때 callback
    pir_callback_t off_f; // 꺼질 때 callback
public:
    Pir(int pin);
    void setCallback(pir_callback_t on_f, pir_callback_t off_f);
    void check();
};

#endif