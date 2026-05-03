#include <iostream>

using namespace std;

int simpleMultiplication(int a)
{
  if (a % 2 == 0)
     {
          a *= 8;
     }
     
     else
     {
          a *= 9;
     }

     return a;
}

int main()
{
     cout << simpleMultiplication(4) << endl; // *8
     cout << simpleMultiplication(5) << endl; // *9

     return 0;
}