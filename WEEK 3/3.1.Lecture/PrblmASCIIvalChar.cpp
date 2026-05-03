#include <iostream>
using namespace std;

int main()
{
     int ASCII_Value;
     char character;
     cin >> ASCII_Value;
     cin >> character;
     cout << "Your ASCII Value is : " << ASCII_Value << endl; 
     cout << "The chacter associated to your ASCII Value is : " << "'" << char(ASCII_Value) << "'" << endl;66;

     cout << "Your character input is : " << character << endl;
     cout << "The ASCII Value associated to your character Value is : " << "(" << int(character) << ")" << endl;

     return 0;
}