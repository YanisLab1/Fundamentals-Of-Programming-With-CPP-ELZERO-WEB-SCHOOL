/*
  Vector
  - Iterator
  --- Loop With Iterator
  --- Ranged Loop With For
*/

#include <iostream> 
#include <vector>

using namespace std;

int main()
{
     vector<int> nums = {10, 20, 30, 40};
     vector<int> :: iterator iterate;

     // Loop with For
     for (iterate = nums.begin(); iterate != nums.end(); ++iterate)
     // != nums.end() or < nums.end()
     // ++iterate pre increment for speed, no rteurn to last object
     {
          cout << *iterate << endl;
     }

     cout << "=========\n";

     // Ranged Loop With For
     for (int vals : nums)
     {
          cout << vals << endl;
     }

     cout << "=========\n";

     int numbers[5] = {100, 200, 300, 800, 500};

     // Ranged Loop with For in Array
     for (int number : numbers)
     {
          cout << number << endl;
     }

     return 0;
}
