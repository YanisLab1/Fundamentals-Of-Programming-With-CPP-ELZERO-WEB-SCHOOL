#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
  int age;
  cin >> age;
  int period = 10;
  int addperiod = 10;

  // Do Not Edit The Next 2 Lines
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";

  // Add The Third Line Below
  cout << "After " << addperiod << " years my age will be: " << age + addperiod;

  return 0;
}

/* "My Age Is: 40"
"10 Years Ago My Age Was: 30"
"After 10 Years My Age Will Be: 50" */