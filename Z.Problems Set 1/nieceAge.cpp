#include <string>
#include <iostream>
using namespace std;

int get_age(const string& she_said)
{
  string age;
  age = to_string(she_said.front());
  return age[0];
}

int main()
{
     cout << get_age("5 years old");
     return 0;
}
