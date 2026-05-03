/*
  Vector
  - Iterator
  --- Traversing
  ------ begin()
  ------ end()
  ------ advance()
*/

#include <iostream> 
#include <vector>

using namespace std;

int main()
{
     vector <int> nums = {10, 20, 30, 40};
     // vector<double> :: iterator iterate = nums.begin(); error => type does notmatch
     vector <int> :: iterator first = nums.begin();
     vector <int> :: iterator last = nums.end() - 1;

     cout << "First Element Is: " << *first << endl;
     cout << "Second Element Is: " << first[1] << endl; // or *(first+1)
     cout << "Third Element Is: " << first[2] << endl; // or *(first+2)

     cout << "========\n";

     cout << "Last lement Is: " << *last << endl;
     cout << "Before Last lement Is: " << *(last-1) << endl;

     cout << "========\n";

     advance(first, 2);
     cout << "First Element After Advance Is: " << *first << endl;
     advance(first, -1);
      cout << "First Element After moving back Is: " << *first << endl;
      
     return 0;
}