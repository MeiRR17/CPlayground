#include <iostream>
using namespace std;

#ifndef __CLOCK_H
#define __CLOCK_H


class Clock
{
    public:
        Clock();
        Clock(int h, int m);

        void show() const;

    private:
        int hours, minutes;
};
#endif //__CLOCK_H
