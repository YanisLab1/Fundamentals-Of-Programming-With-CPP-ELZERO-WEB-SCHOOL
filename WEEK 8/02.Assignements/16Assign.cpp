#include <iostream>
using namespace std;

// Write Your Function Here
int books(int smallBooks, int mediumBooks, int largeBooks, int shelves)
{
     int space = 20 * shelves;
     space = space - ((2*smallBooks)+(mediumBooks*4)+(6*largeBooks));
     if (space > 0)
     {
          return space;
     }

     else
     {
          return 0;
     }
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}