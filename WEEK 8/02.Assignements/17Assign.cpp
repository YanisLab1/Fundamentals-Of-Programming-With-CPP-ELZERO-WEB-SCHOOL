#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int soldPhones, int usedPhones, int price, double taxes)
{
     int CA = ((usedPhones * (price - 200)) + ((soldPhones - usedPhones) * price));
     int dues = (taxes/100) * CA;
     int profit = CA - dues;

     return profit;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}