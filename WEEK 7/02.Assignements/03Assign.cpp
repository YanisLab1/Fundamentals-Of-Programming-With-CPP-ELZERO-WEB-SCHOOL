#include <iostream>
using namespace std;

int main()
{
  int inp1;
  int inp2;

  cin >> inp1;
  cin >> inp2;
  while ( inp1 < 0 || inp2 < 0)
  {
    cin >> inp1;
    cin >> inp2;
  }
  
  if (inp2 > inp1)
  {
    for (int i = inp1 + 1; i < inp2; i++)
    {
      if (i % 2 == 0)
      {
        continue;
      }            
    cout << i << endl;
    }
  }
  
  if (inp1 > inp2)
  {
    for (int i = inp2 +1; i < inp1; i++)
    {
      if (i % 2 == 0)
      {
        continue;
      }            
    cout << i << endl;
    }
  }
  
return 0;
}
