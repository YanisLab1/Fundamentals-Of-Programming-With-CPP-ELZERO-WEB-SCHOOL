/*
  Primitive Data Types

  - bool => Boolean
  --- Only Two Possible Values [true, false]
  --- Value Is Case Sensitive
  --- When We Use Boolean Values
  ------ Anything Has On/Off, Yes/No, True/False
  --- Test Boolean In Math
  --- Test > And <
  --- Test Data [100, 0, -100, ""]

  - void => Valueless
  --- Without Value
*/

void without_value()
{
  // Nothing To Return
}

#include <iostream>
using namespace std;

int main()
{
  bool is_open = true;          // or false
  cout << is_open + 10 << endl; // 1 + 10

  cout << true + true + false << endl; // 1 + 1 + 0

  bool test_one = 10 > 5;   // Yes => True => 1
  bool test_two = 10 > 100; // No => False => 0
  cout << test_one << endl; // 1
  cout << test_two << endl; // 0 

  int num = 1;
  cout << sizeof(test_one) << endl; // 1 Byte 
  cout << sizeof(num) << endl;      // 4 Bytes

  bool numTwo = 2;
  bool numThree = 0;
  cout << numTwo << endl;   // 1
  cout << numThree << endl; // 0 because 0 is false no value 

  return 0;
}