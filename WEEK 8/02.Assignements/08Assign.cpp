#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int numbers[], int numsize)
{
     int even = 0;
     int odd = 1;

     for (int i = 0; i < numsize; i++)
     {
          int num = numbers[i];
          if (num % 2 == 0)
          {
               even += num;
          }

          else if (num % 2 != 0)
          {
               odd *= num;
          }
     }
     
     return odd + even;
}

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40};
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}