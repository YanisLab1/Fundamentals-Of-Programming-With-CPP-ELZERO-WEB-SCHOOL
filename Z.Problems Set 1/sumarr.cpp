#include<vector>
#include <iostream>
using namespace std;

long elementsSum(vector<vector<int>> arr, int d = 0){
  //your code here
  long long unsigned int sum = 0;
  
  for (size_t i = size(arr) - 1; i >= 0; i--)
  {
    sum += arr[i][d];
    d++;
  }
  
  return sum;
}

int main()
{
     cout << elementsSum({{3}, {4, 6, 5, 3, 2}, {9, 8, 7, 4}});
     return 0;
}