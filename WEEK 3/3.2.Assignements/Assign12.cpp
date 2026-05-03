#include <iostream> 
using namespace std;

int main()
{
// Do Not Edit Here
short a = 1000;
int b = 10000;
long double c = 5.560000505012;

cout << sizeof(c) - sizeof(b) << endl;
cout << sizeof(c) + sizeof(b) << endl;
cout << sizeof(c) * sizeof(a) << endl;
cout << a * (int)c << endl;
cout << char(sizeof(c) * 5) << "\n";

cout << "====================" << endl;

// Change ??? To Something Else To Get The Output
cout << (int)(4*c) - (int)(2*(int)c) << "\n"; // 12
cout << (2*(int)c) + (2*(int)c) << "\n"; // 20
cout << (int)(3*(float)c) * 2 << "\n"; // 32
cout << (int)c * a << "\n"; // 5000
cout << char((int)c * 16) << "\n"; // P

return 0;
}