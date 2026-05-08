/*
  Loop
  - Loop For Advanced Trainings
*/

#include <iostream>
using namespace std;

int main()
{
  int nums[] = {100, 200, 300, 400, 500, 600, 700};
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  for (int i=0; i < numsSize; i++)
  {
    cout << nums[i] << " ";
  }
  cout << "\n";
  
  // Needed output: 100, 300, 500

  // Method 1
  for (int i1 = 0; i1 < numsSize - 1; i1++)
  {
    cout << nums[i1] << " ";
    i1++;
  }
  cout << "\n";

  for (int i2 = 0; 2 * i2 < numsSize - 1; i2++)
  {
    cout << nums[2 * i2] << " ";
  }
  cout << "\n";

  // Method 2
  int indexOne = 0;
  for (;;)
  {
    cout << nums[indexOne] << " ";
    indexOne += 2;

    if(nums[indexOne] == nums[numsSize - 1])
    break;
  }
  cout << "\n";

  int indexTwo = 0;
  for (;;)
  {
    cout << nums[2 * indexTwo] << " ";
    indexTwo++;

    if(nums[2 * indexTwo] == nums[numsSize - 1])
    break;
  }
  cout << "\n";

  // Needed output: 600, 500, 400, 300

  // Method 1 
  for (int i3 = numsSize - 2; i3 > 1; i3--)
  {
    cout << nums[i3] << " ";
  }
  cout << "\n";

  // Method 2 
  int indexThree = numsSize - 2;
  for (;;)
  {
    cout << nums[indexThree] << " ";
    indexThree--;

    if (nums[indexThree] == nums[1])
    break;
  }
  cout << "\n";

  return 0;
}