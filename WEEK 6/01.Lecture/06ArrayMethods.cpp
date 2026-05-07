/*
  Arrays
  - Useful Methods
  --- at
  --- front
  --- back
  --- fill
  --- size
  --- empty
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 4> nums = {1,2,3,4};
  
  cout << nums[0] << endl; // Print first element manually 
  cout << nums.front() << endl; // 1 is the first element 

  cout << nums[2] << endl; // Print nums[2] element manually
  cout << nums.at(2) << endl;  // 3 is the element at location nums[2]

  cout << nums[(sizeof(nums)/sizeof(nums[0])) - 1] << endl; // Print first element manually
  cout << nums.back() << endl; // 4 is the last element 

  cout << nums.empty() << endl; // 0 => False, array contains values

  cout << sizeof(nums)/sizeof(nums[0]) << endl; // Print size of Array manually 
  cout << nums.size() << endl; // 4 => arrays contains 4 elements

  return 0;
}