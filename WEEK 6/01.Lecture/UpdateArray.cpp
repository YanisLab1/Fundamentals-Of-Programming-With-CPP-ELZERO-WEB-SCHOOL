/*
  Arrays
  - Declare Empty Array
  - Add Elements To Array
  - Update Array Elements
  - Get Length Of Array With Sizeof
*/

#include <iostream> 
using namespace std;

int main()
{
     int nums[4];

     nums[3] = 400; // last element
     nums[2] = 300; // third element
     // first element not declared => trash value
     nums[1] = 200; // second element

     cout << "ELement 1 is : " << nums[0] << " trash(not declared) " << endl;
     cout << "ELement 2 : " << nums[1] << endl;
     cout << "ELement 3 : " << nums[2] << endl;
     cout << "ELement 4 : " << nums[3] << endl;

     nums[0] = 1000;
     cout << "ELement 1 : " << nums[0] << " Update(first element declared) " << endl;

     cout << "===============" << endl;

     int random[] = {1, 2, 3, 4, 8, 9};
     cout << "number of elements of this array is : " << sizeof(random) / sizeof(random[0]) << endl;

     return 0;
}