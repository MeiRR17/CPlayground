#include <iostream>
using namespace std;

void changeByVal(int x);
void changeByRef(int &x);

int main() 
{
    int x = 3, y = 5;
    
    cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << "\n";
}
void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}
