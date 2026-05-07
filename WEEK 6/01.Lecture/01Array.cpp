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
  cout << sizeof(int) << endl;  // 4 Bytes
  cout << sizeof(nums) << endl; // 4 Bytes * 4 elements = 16 Bytes

  double doub [4] = {1.4545, 1.3454, 5.534535, 343.3434};
  cout << sizeof(double) << endl;  // 8 Bytes
  cout << sizeof(doub) << endl;    // 8 Bytes * 4 elements = 32 Bytes

  int random[] {344, 43, 34322};  // compiler define type by lookin at element in Array
  cout << sizeof(random) << endl; // 4 Bytes * 3 elements = 12 Bytes

  return 0;
}