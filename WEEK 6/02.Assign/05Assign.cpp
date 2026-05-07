#include <iostream>
#include <array>
using namespace std;

int main()
{
  //array <int, 5> vals = {100, 200, 600, 200, 100};
  //array <int, 4> vals = {100, 200, 200, 100};
  //array <int, 5> vals = {100, 300, 600, 200, 100};

  //if (vals.front() == vals.back() && vals.at(1) == vals.at(2))
  //  cout << "Array Is Palindrome" << endl;
  //else 
  //  cout << "Array Is Not Palindrome" << endl;

  //int vals[] = {100, 200, 600, 200, 100};
  //int vals[] = {100, 200, 200, 100};
  int vals[] = {100, 300, 600, 200, 100};

  if (vals[0] == vals[size(vals) - 1] && vals[1] == vals[size(vals) - 2])
    cout << "Array Is Palindrome" << endl;
  else 
    cout << "Array Is Not Palindrome" << endl;
  
  // Output
  //"Array Is Palindrome"
  
  // Example 2
  //int vals[] = {100, 200, 200, 100};
  
  // Output
  //"Array Is Palindrome"
  
  // Example 3
  //int vals[] = {100, 300, 600, 200, 100};
  
  // Output
  //"Array Is Not Palindrome"

  return 0;
}