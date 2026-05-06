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
  int age = 19;
  int points = 950;

  /*
  if (age >= 18)
  {
    cout << "Ok\n";
  }

  else 
  {
    if (points >= 500)
    {
      cout << "Ok because of points";
    }
    else 
    {
      cout << "No points or age";
    }
  }
  */

  cout << (age >= 18 ? (points >= 500 ? "You're Invited" : "Your Points are not enough") : "We're sorry");

  // cout << (points >= 500 ? "OK P\n" : "No P\n");

  /* result in one line you can ommit (if) brackets 
  if (age >= 18)
    cout << "OK\n";
  else
    cout << "Not OK\n";
  */

  return 0;
}