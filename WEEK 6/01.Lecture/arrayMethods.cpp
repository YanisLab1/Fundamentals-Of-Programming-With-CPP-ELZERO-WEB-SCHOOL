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

     cout << nums[0] << endl;

     cout << nums.front() << endl; // 1 is the first element 
     cout << nums.at(2) << endl;  // 3 is the element at location nums[2]
     cout << nums.back() << endl; // 4 is the last element 
     cout << nums.empty() << endl; // 0 => False, array contains values
     cout << nums.size() << endl; // 4 => arrays contains 4 elements 

     return 0;
}