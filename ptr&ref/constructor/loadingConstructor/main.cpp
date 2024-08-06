#include <iostream>
using namespace std;
#include "clock.h"

int main() {
    Clock c1, c2(21, 30);

    c1.show();
    cout << endl;

    c2.show();
    cout << endl;

    return 0;
}