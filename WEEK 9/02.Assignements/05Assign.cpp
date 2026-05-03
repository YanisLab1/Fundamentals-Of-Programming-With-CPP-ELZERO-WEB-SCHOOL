#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  // 80 70 60 50 40 30 20 10 
  vector<int>::iterator it = numbers.begin();

  // Write Method One
  // numbers.erase(numbers.begin());
  // numbers.erase(numbers.begin());
  // numbers.erase(numbers.begin());
  // numbers.erase(numbers.begin());

  // Write Method Two
  // reverse(numbers.begin(), numbers.end());
  // advance(it, size(numbers)-1);
  // advance(it, -1);
  // advance(it, -1);
  // advance(it, -1);
  // advance(it, -1);

  // Write Method Three
  advance(it, size(numbers)-1);
  advance (it , -1);
  advance (it , -1);
  advance (it , -1);


  cout << *it << "\n"; // 50
  return 0;
}