#include <iostream> 
using namespace std;

int main()
{
     int num;
     cout << "Please Type A Number Between 0 And 150\n";
     cin >> num;

     if (num < 10)
     {
          cout << "00" << num << endl;
     }

     else if ( 10 <= num && num < 100)
     {
          cout << "0" << num << endl;
     }

      else
     {
          cout << num << endl;
     }

     return 0;
}