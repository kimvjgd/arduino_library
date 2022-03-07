#include "Button.h"

Button::Button(int pin) : pin(pin)
{
  pinMode(pin, INPUT_PULLUP);
  callback = NULL;
}

void Button::setCallback(button_callback_t callback)
{
  this->callback = callback;
}

int Button::read()
{
  return !digitalRead(pin);
}

void Button::check()
{
  bool o_sw, n_sw;
  o_sw = read();
  delay(10);
  n_sw = read();

  if (o_sw == 0 && n_sw == 1)
  {
    if (callback != NULL)
    {
      callback();
    }
  }
}

// 밑에는 Hardware로 interrupt하는 것인데
// 성능면에서는 뛰어나지만
// 나중에 통신을 하면 좋지않다.
// 데이터가 들어오는 것을 중지시키는데 수신된 데이터가 분실될 수 있다.
// 가급적 쓰지말자.

void Button::attachInterrupt(button_callback_t callback, int mode)
{
  ::attachInterrupt(digitalPinToInterrupt(pin), callback, mode);
  t1 = millis();
}

bool Button::debounce()
{
  unsigned long t2 = millis();
  if ((t2 - t1) < 200)
    return false;
  // 위에서 걸리면 밑에까지 안오지..
  t1 = t2;
  return true;
}
