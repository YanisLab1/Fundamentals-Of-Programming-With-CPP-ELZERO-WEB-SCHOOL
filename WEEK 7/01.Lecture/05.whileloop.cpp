  /*
  Loop
  - Loop With While

  Syntax
  while (Condition Is True)
  {
    do something
    increment or decrement 
    if (Condition)
    break;
  }
*/

#include <iostream>
using namespace std;

int main()
{
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << i << "\n";
  // }

  int i = 0;
  while ( i < 5 ) 
  {
    cout << i << "\n";
    i++;
    if ( i == 2)
    {
      break;
    }
  }
  
  return 0;
}