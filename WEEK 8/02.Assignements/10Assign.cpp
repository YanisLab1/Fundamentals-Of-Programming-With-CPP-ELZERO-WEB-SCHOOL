#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int numbers[], int numsize)
{
     int minpositive;

     for (int i =0; i < numsize; i++)
     {
          if (numbers[i] > 0 && numbers[i] < minpositive)
          {
               minpositive = numbers[i];
          }

          else 
          {
               continue;
          }
     }
     return minpositive;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}