/*
  Function
  - Passing Array As Parameter
*/

#include <iostream> 
using namespace std;

void calc(int nums[], int count)
{
     int result = 0;
     for (int i = 0; i < count; i++)
     {
          result += nums[i];
     }
      cout << "Result is : " << result << endl;
}

int main()
{
     int numbers[]= {10, 20, 30, 40};
     int numbersCount = size(numbers);

     calc(numbers, numbersCount);

     return 0;
}