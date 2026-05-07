/*
  Arrays
  - Access Array Elements
  - Arrays are zero base indexing 
  - Check Element Location
*/

#include <iostream> 
using namespace std;

int main()
{
  int nums []{100, 200, 300};

  cout << "First Element " << nums[0] << endl; // Prints first element 
  cout << "Last Element " << nums[2] << endl; // Number of elements - 1

  cout << "First Element Location " << &nums[0] << endl;
  cout << "Secend Element Location " << &nums[1] << endl;
  cout << "Last Element Location " << &nums[2] << endl;

  return 0;
}