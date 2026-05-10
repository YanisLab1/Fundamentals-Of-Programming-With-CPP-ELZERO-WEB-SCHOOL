#include <iostream>
using namespace std;

int main()
{
     int i;
     int result = 2;

     // for (i = 0; i < 6; i++)
     // {
     //      cout << result << endl;
     //      result = result * 2 + 2;
     // }

     i = 0;

     while (i < 6)
     {
          cout << result << endl;
          result = 2 * result + 2;
          i++;
     }

     return 0;
}