#include <iostream>
using namespace std;

int main()
{
     int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
     int check;

     for (int i = 0; i < size(nums); i++)
     {
          check = nums[i] + nums[i];

          if (check == nums[i+1])
          {
               cout << nums[i] << endl;
          }
          
     }

     return 0;
}