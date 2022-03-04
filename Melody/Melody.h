#ifndef MELODY_H
#define MELODY_H

#pragma once

#include <Arduino.h>

class Melody
{

protected:
    int pin;

    int *notes;
    int *durations;
    int length;

    int cur_ix;
    long old_time;
    int note_duration;

    bool b_play; //연주 여

public:
    Melody(int pin, int *notes, int *durations, int length);
    void play();
    void stop();
    int toggle(bool bpause = false);
    void replay();
    int getNote();
    void run();

private:
};

#endif