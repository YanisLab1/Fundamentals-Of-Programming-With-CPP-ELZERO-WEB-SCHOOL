/*
  Vector
  - Use Iterator To:
  --- Sort
  --- Count
  --- Reverse
*/

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int> numbers = {10, 500, 60, -20, 20, 100, 20};

     int val = 20;
     int countTimes = count(numbers.begin(), numbers.end(), val);
     cout << "Number " << val << " Found " << countTimes << " Times." << endl;

     cout << "========================\n";

     for (int &n : numbers) // &n to access directly the value in vector.
     {
          cout << n << endl;
     }

     cout << "==============\n";

     sort(numbers.begin(), numbers.end());

     for (int &n : numbers)
     {
          cout << n << endl;
     }

     cout << "==============\n";

     reverse(numbers.begin(), numbers.end());

     for (int &n : numbers)
     {
          cout << n << endl;
     }

     return 0;
}
