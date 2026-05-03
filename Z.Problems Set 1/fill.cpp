#include <vector>
#include <iostream>

using namespace std;

vector<int> between(int start, int end);

int main()
{
     for (int i = 0; i < 2 - (-2) + 1; i++)
     {
          cout << between(-2, 2) << endl;
     }
     
     return 0;
}

vector<int> between(int start, int end)
{
  // your code here
  vector<int> nums{};
  for (int i = 0; i < (end - start) + 1; i++)
    {
       for (int j = start; j <= end; j++)
       {
         nums[i] = j;
       }
    }
  return nums;
}  
