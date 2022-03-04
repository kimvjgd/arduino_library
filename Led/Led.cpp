#include "Led.h"

// Led class의 생성자이다. :: scope(뭐의 뭐인지)
Led::Led(int pin) : pin(pin) // 멤버변수(지역매개변수)
{
  // 지역변수 -> 멤버변수 -> 전역변수
  pinMode(pin, OUTPUT);
}

void Led::on()
{
  digitalWrite(pin, HIGH);
}

void Led::off()
{
  digitalWrite(pin, LOW);
}

void Led::toggle()
{
  int v = !digitalRead(pin); // 현재 출력 값 읽기
  digitalWrite(pin, v);
}
void Led::blink(int delay_time)
{
  toggle();
  if (delay_time > 0)
  {
    delay(delay_time);
  }
}
void Led::setValue(int value)
{
  digitalWrite(pin, value);
}
