#ifndef NUMBERPAD_H
#define NUMBERPAD_H

#pragma once

#include <Keypad.h>
#include <Arduino.h>

class NumberPad
{
protected:
    Keypad keypad;

public:
    NumberPad();
    char getKey();

private:
};

#endif
