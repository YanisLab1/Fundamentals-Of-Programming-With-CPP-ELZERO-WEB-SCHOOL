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
     cout << "Welcome!" << "\n";
     int age;
     cin >> age;

     if (age < 18)
     {
          cout << "Beware" << endl;
     }
     
     cout << "See you" << "\n";
     return 0;
}