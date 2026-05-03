#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(float a, float b)
{
     // int result = a;
     // for (int i = b - b + 1; i < b; i++)
     // {
     //      result = result * a;
     // }
     // cout << result << endl;

     cout << pow(a, b) << endl;
}

int main()
{
  thepower(2, 5); // 32
  thepower(4, 6); // 4096
  return 0;
}