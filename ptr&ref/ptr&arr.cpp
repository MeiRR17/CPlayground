#include <iostream>
using namespace std;

int main() {
  char* daysOfWeek[] = {
    "Sunday", "Monday", "Tuesday",
    "Wednesday", "thursday", "Friday", "Saturday"
  };
  
  // Pointer to the array
  char** ptr = daysOfWeek;
  
  
  cout << "Accessing using array index:" << endl;
  for (int i = 0; i < 7; i++) {
    cout << daysOfWeek[i] << endl;
  
  }
  
  
  cout << "\nAccessing using Pointer arithmetic:"<<endl;
  for (int i = 0; i < 7; i++) {
    cout << *(ptr + i) << endl;
  }
  
  return 0;
}