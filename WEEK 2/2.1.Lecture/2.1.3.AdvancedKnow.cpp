/*
  Variables Advanced Knowledge
  - Declare Variable Without Value & Change Later
  - Declare Multiple Variables Without Value & Change Later
  - Declare Multiple Variables With Same Value
*/

#include <iostream>
using namespace std;

int main()
{
  int a;
  a = 10;
  cout << a; // 10

  cout << "\n======================\n";

  int b, c, d;
  b = 5, c = 2, d = 7;
  cout << b+c+d; // 14 [5+2+7]

  cout << "\n======================\n";

  int e, f = 23, g;
  e = 12, g = 5;
  cout << f-e-g; // 6 [23-12-5]

  cout << "\n======================\n";

  int x, y, z;
  x = y = z = 25;
  cout << x+y+z;

return 0;
}     