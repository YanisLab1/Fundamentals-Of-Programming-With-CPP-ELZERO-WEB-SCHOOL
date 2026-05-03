#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int money[], int monSize)
{
    float income = 0;
    for (int i = 0; i < monSize; i++)
    {
     income += money[i];
    }
    float average = income / monSize;
    return average;
}


int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}