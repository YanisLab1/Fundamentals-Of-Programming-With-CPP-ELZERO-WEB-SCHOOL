#include <iostream>
using namespace std;

int main()
{
     // Do Not Edit Here
     short a = 1000;
     int b = 10000;
     long double c = 5.560000505012;

     // Change ??? To Something Else To Get The Output
     cout << ((int(a*c)) * 2)/(b/a) - ((b+a)/(b/a))<< "\n"; // 12
     cout << (b/a) + (b/a) << "\n"; // 20
     cout << sizeof(c) * sizeof(a) << "\n";
     cout << a * (int(c)) << "\n";
     cout << char((sizeof(c)/sizeof(a)) * (b/a))<< "\n";
     
     return 0;
}