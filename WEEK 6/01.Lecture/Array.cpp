/*
  Arrays
  - What Is Array ?
  --- Collection Of Elements Of The Same Type
  --- Placed in Contiguous Memory Locations stored back to back
  --- Referenced By Index Started From 0
  - Why We Need Array ?
  - Creating Array Syntax
  - Check Array Size
  - Create Array Without Size
*/

#include <iostream> 
using namespace std;

int main()
{
     int nums[4] = {100, 200, 300, 400};
     cout << sizeof(nums) << endl;

     double dos[4] = {1.4545, 1.3454, 5.534535, 343.3434};
     cout << sizeof(dos) << endl;

     int rands []{344, 43, 34322};
     cout << sizeof(rands) << endl;

     return 0;
}