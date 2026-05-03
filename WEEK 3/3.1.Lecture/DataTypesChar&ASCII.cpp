/*
  Primitive Data Types
  - char => Character
  --- Added Inside Single Quotes => Test With Auto
  --- ASCII Value
  --- ASCII => American Standard Code for Information Interchange.
  --- A Way of Representing Characters As Numbers

  --- Search For Type Casting
  --- Create App To Convert ASCII To Character
  --- Create App To Convert Character To ASCII
*/

#include <iostream>
using namespace std;

int main()
{
  char one = 'A';
  cout << sizeof(one) << endl; // 1

  auto two = 'B';
  cout << sizeof(two) << endl; // 1

  auto three = "C";
  cout << sizeof(three) << endl; // 8 because of ""

  char d = 'Z';
  cout << int(d) << endl; // 90 ASII Value

  cout << int('%') << endl; // 37
  cout << int('(') << endl; // 40
  cout << int(')') << endl; // 41

  // cout << int("Z") << endl; // Error ""

  cout << char(81) << endl; // Q letter

  int ascii_value;
  cout << "Enter an ASCII Value: ";
  cin >> ascii_value;
  char ascii= char(ascii_value);
  cout << ascii << endl;

  char ascii_character;
  cout << "Enter a character: ";
  cin >> ascii_character;
  int asciiValue= int(ascii_character);
  cout << asciiValue << endl;

  return 0;
}