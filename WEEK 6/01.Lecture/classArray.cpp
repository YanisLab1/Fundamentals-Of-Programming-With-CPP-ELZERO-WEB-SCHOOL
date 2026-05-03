/*
  Arrays
  - Array Class
  - Test Methods

  Syntax
  Template<Type, Size> Identifier;
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
     // int points[4] = {1, 2, 3, 4}; C-Style Array

     array<int, 4> points = {1, 2, 3, 4}; // syntax array<type, size> arrayname or identifier = {values, };

     cout << points[0] << endl;
     cout << points[1] << endl;
     cout << points[2] << endl;
     cout << points[3] << endl;

     cout << "Element Count : " << points.size() << endl;

     points.fill(100);
     cout << points[0] << endl;
     cout << points[1] << endl;
     cout << points[2] << endl;
     cout << points[3] << endl;

     points.fill('A');
     cout << points[0] << endl;
     cout << points[1] << endl;
     cout << points[2] << endl;
     cout << points[3] << endl;

     points.fill(false);
     cout << points[0] << endl;
     cout << points[1] << endl;
     cout << points[2] << endl;
     cout << points[3] << endl;

     return 0;
}