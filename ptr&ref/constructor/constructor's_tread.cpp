#include <iostream>
using namespace std;

class MyClass
{
    public:
    MyClass()
    {
        cout << "in the constructor of MyClass\n";
    }
};
int main()
{
    MyClass c1;
    cout << "-----------\n";
    MyClass* c2;
    cout << "-----------\n";
    c2 = new MyClass;
    cout << "-----------\n";
    delete c2;
    return 0;
}