#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int numbers[], int numsize)
{
     int maxnegative = INT_MIN;

     for (int i = 0; i < numsize; i++)
     {
          if (numbers[i] == numbers[0])
          {
               continue;
          }

          else if (numbers[i] < 0 && maxnegative < numbers[i])
          {
               maxnegative = numbers[i];
          }
     }
     return maxnegative;
}

int main()
{
  int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10};
  // -5
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}