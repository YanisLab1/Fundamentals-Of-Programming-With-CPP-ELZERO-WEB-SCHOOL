/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Logical Operators
  "For Logic Between Values"

  --- && And
  --- || Or
  --- ! Not
*/

#include <iostream>
using namespace std;

int main()
{
  int age = 20;
  int points = 800;
  cout << (age >= 18 && points >= 500) << endl; // 1 => True

  int ageTwo = 16;
  int pointsTwo = 800;
  cout << (ageTwo >= 18 && pointsTwo >= 500) << endl; // 0 => False

  int ageThree = 16;
  int pointsThree = 800;
  cout << (ageThree >= 18 || pointsThree >= 500) << endl; // 1 => True

  int ageFour = 16;
  int pointsFour = 450;
  cout << (ageFour >= 18 || pointsFour >= 500) << endl; // 0 => False
  
  cout << (100 == 10 || 50 == 10 || 20 == 10 || 10 == 10) << endl; // 1 => True
  cout << (100 == 10 && 50 == 10 && 20 == 10 && 10 == 10) << endl; // 0 => False
  
  cout << (10 == 10) << endl;   // 1 => True
  cout << !(10 == 10) << endl;  // 0 => False
  cout << !(100 == 10) << endl; // 1 => True

  return 0;
}