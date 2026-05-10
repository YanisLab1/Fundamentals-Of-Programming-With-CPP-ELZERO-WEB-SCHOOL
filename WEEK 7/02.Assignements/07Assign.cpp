#include <iostream>

using namespace std;

int main()
{
     int i;
     int result = 2;

     // for (i = 0; i < 7; i++)
     // {
     //      cout << result << endl;
     //      result = 2 * result;
     // }

     i = 0;

     while (i < 7)
     {
          cout << result << endl;
          result = 2 * result;
          i++;
     }

     return 0;
}