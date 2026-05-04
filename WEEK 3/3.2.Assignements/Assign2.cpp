#include <iostream>
using namespace std;

int main()
{
     double salary = 5000.98;
     cout << sizeof(salary) << " Bytes" << endl;
     const int bits_per_bytes = 8;
     cout << sizeof(salary) * bits_per_bytes << " Bits" << endl;
     // 8 Bytes
     // 64 Bits
     return 0;
}