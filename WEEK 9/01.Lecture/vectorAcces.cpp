/*
  Vector

  - Access
  --- at()
  --- Square Brackets [] < Do Not Use

  - Add
  --- push_back => Add Element To The End

  - Update
  --- at()

  - Delete
  --- pop_back() => Remove Element From The End
*/

#include <iostream> 
#include <vector>

using namespace std;


int main()
{
     vector<int> vector = {10, 20, 30};

     cout << vector.at(2) << endl;
     cout << vector[2] << endl; //preferably do not use because if out of range => garbage value
     //cout << vector.at(3) << endl; // terminated because out of range => reason to use at()

     cout << "======\n";

     vector.push_back(40);
     cout << vector.size() << endl;
     cout << vector.at(3) << endl;

     cout << "======\n";

     vector.at(3) = 100;
     cout << vector.at(3) << endl;
     vector.push_back(500);
     cout << vector.size() << "\n"; // 5
     cout << vector.at(4) << "\n"; // 500

     cout << "======\n";

     vector.pop_back();
     cout << vector.size() << endl;

     return 0;
}