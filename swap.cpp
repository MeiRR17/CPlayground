#include <iostream>
using namespace std;

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
