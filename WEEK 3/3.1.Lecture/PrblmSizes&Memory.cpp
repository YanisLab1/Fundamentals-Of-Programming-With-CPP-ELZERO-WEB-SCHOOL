#include <iostream>
using namespace std;

int main()
{
     int numberKylobytes;

     cin >> numberKylobytes; 

     cout << "[1]. The Number Of Kylobytes That User Input Is : " << numberKylobytes << "\n";

     int numberBytes = numberKylobytes * 1024;

     cout << "[2]. The Number of Bytes is : " << numberBytes << "\n";

     int numberBits = numberBytes * 8;

     cout << "[3]. The Number Of Bits is : " << numberBits << "\n";

     return 0;
}