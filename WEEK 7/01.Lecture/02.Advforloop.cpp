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

  // Normal Syntax
  for (int i = 0; i < numsCount ; i++)
  {
    cout << nums [i] << " ";
  }

  cout << "\n";

  // Advanced Syntax
  int index = 0;                // initialize
  for (;;)
  {
    cout << nums[index] << " "; // block of code
    index++;                    // update

    if (index == numsCount)     // condition
    {
      break;
    }
  }

  return 0;
}