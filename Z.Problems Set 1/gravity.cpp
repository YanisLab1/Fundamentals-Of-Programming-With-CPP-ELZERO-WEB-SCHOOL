#include <vector>
#include <algorithm> 
#include <iostream> 

using namespace std;

vector<int> flip(char dir, vector<int> arr) {
  if (dir == 'R')
  {
    sort(arr.begin(), arr.end());
  }
  
  else if (dir == 'L')
  {
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
  }
   return arr;
}

int main()
{
     flip('R', { 3, 2, 1, 2 });
}
