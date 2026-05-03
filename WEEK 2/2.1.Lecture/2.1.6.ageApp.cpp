/* 
  Calculte Your Age Application
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "=================================\n";
  cout << "==Calculte Your Age Application==\n";
  cout << "=================================\n";

  int age;
  cin >> age;

  int age_in_days = age * 365;
  int age_in_hours = age_in_days * 24;

  cout << "Age in Days is: " << age_in_days << endl;
  cout << "Age in Hours is: " << age_in_hours << endl;



  return 0;
}