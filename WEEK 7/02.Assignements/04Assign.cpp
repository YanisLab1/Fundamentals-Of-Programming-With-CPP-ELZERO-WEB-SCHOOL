#include <iostream>
using namespace std;

int main()
{
     // for (int i = 0; i < 20; i+=2)
     // {
     //      if (i == 10 || i == 12)
     //      {
     //           continue;
     //      }
     //      cout << i << endl;
     // }

     int i = 0;
     
     while (i < 20)
     {
           if (i == 10)
          {
               i+=4;
          }
          cout << i << endl;
          i+=2;
     }
     return 0;
}