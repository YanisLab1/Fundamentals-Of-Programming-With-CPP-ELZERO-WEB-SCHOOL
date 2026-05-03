/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Arithmetic Operators
  "For Mathematical Operations"

  --- + => Addition
  --- - => Subtraction
  --- * => Multiplication
  --- / => Division
  --- % => Modulo => Remainder After Division

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/

#include <iostream>
using namespace std;

int main()
{
     cout << 10 + 10 << "\n";
     cout << 10.5 + 9.5 << "\n";
     cout << 10.5f + 9.5f << "\n";
     cout << int(10.5 + 9.5) << "\n";

     cout << "===================\n";

     cout << sizeof(10 + 10) << "\n";
     cout << sizeof(10.5 + 9.5) << "\n";
     cout << sizeof(10.5f + 9.5f) << "\n";
     cout << sizeof(int(9.5 + 10.5)) << "\n";

     cout << "===================\n";

     cout << 100 - 10 << "\n";
     cout << 100 - -50 << "\n";

     cout << "===================\n";

     cout << 20 * 5 << "\n";

     cout << "===================\n";

     cout << 12 / 5 << "\n";
     cout << 12.f / 5.f << "\n";
     cout << 20 % 5 << "\n"; // 0 because 20 / 5 = 4 and remainder 0
     cout << 12 % 5 << "\n"; // 2 because 10 / 5 = 2 and remainder 2
     cout << 24 % 5 << "\n"; // 4 because 20 / 5 = 4 and remainder 4
     // cout << 24.5 % 5 << "\n"; // Problem remainder only with int type

     return 0;
}