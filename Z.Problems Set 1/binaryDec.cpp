#include <string>
#include <iostream>
using namespace std;

using namespace std;
string decodeSubmarineMessage(string binaryString) {
        // Write code here
        string s = "";
        int num;
        for (size_t i = 0; i < binaryString.length(); i+=8)
        {
            s += to_string((char)binaryString[i] + (char)binaryString[i+3] + (char)binaryString[i+4] +(char)binaryString[i+5] + (char)binaryString[i+6] + (char)binaryString[i+7]);
        }
        return s;
}

int main ()
{
     cout << decodeSubmarineMessage("0100100001100101");
     return 0;
}