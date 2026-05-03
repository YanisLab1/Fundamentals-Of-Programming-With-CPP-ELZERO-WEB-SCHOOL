/*
  Loop
  - Loop For Advanced Syntax
*/

#include <iostream> 
using namespace std;

int main()
{
     int nums[] = {100, 200, 300, 400, 500, 600};
     int numsCount = size(nums);

     int i = 0;

     for (;;)
     {
          cout << nums[i] << endl;
          i++;

          if (i == numsCount)
          {
               break;
          }
     }

     return 0;
}