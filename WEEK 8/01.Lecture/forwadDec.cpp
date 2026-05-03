/*
  Function
  - Forward Declaration
*/

#include <iostream>
using namespace std;

int calc(int a, int b);

int main()
{
  // Call
  cout << calc(10, 20);
  return 0;
}

// Declaration
int calc(int a, int b)
{
  return a + b;
}