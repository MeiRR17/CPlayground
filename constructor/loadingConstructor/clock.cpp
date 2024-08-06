#include <iostream>
using namespace std;

#include "clock.h"

Clock::Clock()
{
    hours = minutes = 0;
}
Clock::Clock(int h, int m)
{
    hours = h;
    minutes = m;
}
void Clock::show() const {
    cout << "Time: " << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
}

