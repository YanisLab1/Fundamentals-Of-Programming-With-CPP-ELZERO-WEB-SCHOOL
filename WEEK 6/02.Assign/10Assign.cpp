#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << nums.front() <<endl;
  cout << nums.back() <<endl;

  // Method 2
  cout << nums[0] <<endl;
  cout << nums[nums.end() /*6*/ - nums.begin() /*0*/ - 1 /*(=5)*/] << endl;
  

  // Method 3
  cout << nums.at(0) <<endl;
  cout << nums.at(size(nums)-1) <<endl;
 
  return 0;
}