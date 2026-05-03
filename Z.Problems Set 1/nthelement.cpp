#include <iostream>

using namespace std;

int nthEven(int n)
{
  // your code here
  int num = 0;
  int i = 0;
  
  while (i != n)
  {
    if (i % 2 == 0)
    {
      num += i;
      ++i;
      return num;
    }
    
    else if (i % 2 != 0)
    {
     ++i;
    }
  }
  
  return num;
}

int main()
{
     cout << nthEven(2) << endl;

     return 0;
}