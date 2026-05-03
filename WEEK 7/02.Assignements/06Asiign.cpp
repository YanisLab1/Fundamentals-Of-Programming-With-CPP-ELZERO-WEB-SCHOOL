#include <iostream>
using namespace std;


int main()
{
     int i = 0;
     int result = 10;
     
     // for (i = 0; i < 4; i++)
     // {
     //      cout << result << endl;
     //      result *= result;
     // }

     while (i < 4)
     {
          cout << result << endl;
          result *=result;
          i++;
     }

     return 0;
}