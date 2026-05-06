/*
  Control Flow
  - If Condition Introduction

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

#include <iostream>
using namespace std;

int main ()
{
  cout << "Welcome! Please Enter Your Age: ";
  int age;
  cin >> age;

  if (age < 18)
  {
    cout << "Beware Our Website is Age Restricted!" << endl;
  }
  
  cout << "Have Fun In Our Website!" << "\n";
  return 0;
}