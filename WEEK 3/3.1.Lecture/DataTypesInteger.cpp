/*
  Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
     int numOne = 10;
     int numTwo = 0;
     int numThree = -500;
     int numFour = true;
     // int numFour = "Hi!"; // Problem

     cout << numOne << endl;
     cout << numTwo << endl;
     cout << numThree << endl;
     cout << numFour << endl;

     cout << INT_MIN << endl;
     cout << INT_MAX << endl;

     cout << sizeof(int) << endl;
     cout << sizeof(char) << endl;
     cout << sizeof(float) << endl;
     cout << sizeof(double) << endl;
     cout << sizeof(bool) << endl;

     int num1 = 10;
     int num2 = 3;
     auto result1 = num1 / num2; // Truncaion 
     auto result2 = (float) num1 / num2; // Casting variables to avoid truncation for one var is enough
     cout << result1 << endl;
     cout << result2 << endl;

     return 0;
}