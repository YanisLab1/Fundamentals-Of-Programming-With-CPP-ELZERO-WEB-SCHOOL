#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int repeats(vector<int>v)
{
  int sum = 0;
  
  for (int i = 0; i < size(v); i++)
  {
    sum += v[i];
    for (int j = i + 1; j < size(v); j++)
    {
      if (v[i] == v[j])
      {
        sum = 0;
      }
    }
  }
  return sum;
}

int main()
{
     cout << repeats({9, 10, 19, 13, 19, 13}) << endl;
}

