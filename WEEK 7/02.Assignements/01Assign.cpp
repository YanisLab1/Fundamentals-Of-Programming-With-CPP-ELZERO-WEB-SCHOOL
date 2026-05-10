#include <iostream>

using namespace std;

int main ()
{
     cout << "For Output" << "\n";
     for (int i = 0; i < 11; i++)
     {
          cout << i << endl;
     }

     cout << "While Output" << "\n";
     int i = 0;
     while (i < 11)
     {
          cout << i << "\n";
          i++;
     }

     cout << "Do While Output" << "\n";
     int i2 = 0;
     do
     {
          cout << i2 << endl;
          i2++;
     } while (i2 < 11);
     return 0;
}