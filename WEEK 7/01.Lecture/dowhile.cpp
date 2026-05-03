/*
  Loop
  - Loop With Do...While

  Syntax
  do
  {

  } while (Condition Is True);
*/

#include <iostream>
using namespace std;

int main()
{
  int index = 6;

  // while (index < 6)
  // {
  //   cout << index << "\n";
  //   index++;
  // }

  do
  {
    cout << index << "\n";
    index++;
  } while (index < 6);

  return 0;
}