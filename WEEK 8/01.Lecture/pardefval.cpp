/*
  Function
  - Parameter Default Value
*/

#include <iostream>
using namespace std;

void details(string msg = "Welcome", string name = "Unknown")
{
  cout << msg << " " << name << "\n";
}

int main()
{
  details("Hello", "Ahmed");
  details("name");
  details();
  return 0;
}