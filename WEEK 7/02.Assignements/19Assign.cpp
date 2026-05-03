#include <iostream>
using namespace std;

int main()
{
     for (int i = 0; i < 1200; i+=100)
     {
          if (i == 0)
          {
               continue;
          }

          else if (i == 100 || i == 1100)
          {
               cout << i << endl;
          }

          else 
          {
               cout << i << endl;
               cout << i << endl;
          }
     }

 return 0;
}