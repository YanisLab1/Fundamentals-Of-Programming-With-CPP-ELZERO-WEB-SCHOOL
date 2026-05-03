/*
  Function
  - DRY
  - User Defined and Built-In
  - Syntax

  returnDataType functionName(Param1, Param2, Param3)
  {
    // Function Body Contain Block Of Code
  }

  - Example
  - Why We Use Functions
  - Declare A Function And Call It
*/

#include <iostream> 
using namespace std;

void sayName();

int main ()
{
     sayName();

     return 0;
}

void sayName()
{
     string name;
     cin >> name;
     cout << "Hello " << name << endl;
}