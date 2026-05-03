/*
  Control Flow
  - Nested Ternary Operator
  - Alternate Syntax For If Condition

  Syntax
  (Condition Is True) ? True : False;
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 20;
  int points = 450;

  cout << (age >= 18 ? (points >= 500 ? "You're Invited" : "Your Points are not enough") : "We're sorry");

  /*cout << (points >= 500 ? "OK P\n" : "No P\n");

  if (age >= 18)
    cout << "OK\n";
  else
    cout << "Not OK\n";*/

  return 0;
}