/*
  Loop
  - Loop With For
  - Loop On Array

  Syntax
  for(init, Condition, Update)
  {
    // Block Of Code
  }
*/

#include <iostream> 
using namespace std;

int main()
{
     // befor for loop 
     int num = 0;
     cout << num << "\n"; // 0
     num++;
     cout << num << "\n"; // 1
     num++;
     cout << num << "\n"; // 2
     num++;
     cout << num << "\n"; // 3
     num++;
     cout << num << "\n"; // 4
     num++;
     cout << num << "\n"; // 5

     // with for loop
     for (int index = 0; index < 6; index++)
     {
          cout << index << endl;
     }

     int nums[] = {100, 200, 300, 400};

     cout << nums[0] << endl;
     cout << nums[1] << endl;
     cout << nums[2] << endl;
     cout << nums[3] << endl;
     
     for (int i = 0; i < size(nums); i++)
     {
          cout << nums[i] << endl;
     }
     
     return 0;
}