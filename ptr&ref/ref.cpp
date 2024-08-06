#include <iostream>
using namespace std;

void changeByVal(int x);
void changeByRef(int &x);

int main() 
{
    int num = 10;
    cout << "orig num = " << num << endl;
    changeByVal(num);
    cout << "after ByVal: num = " << num <<endl;
    changeByRef(num);
    cout << "after byRef: num = " << num <<endl;
    
    return 0;
}
void changeByRef(int & x){
  x = 4;
}
void changeByVal(int x){
  x = 4;
}
