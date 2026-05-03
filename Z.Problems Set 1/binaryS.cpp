#include <string>
#include <iostream>
using namespace std;

string fakeBin(string str)

{
  //your code here
  string s = "";
  
  for (size_t i =0; i < str.length(); i++)
  {
     (str[i] < '5')? s += "0" : s += "1";
  }
  return s;
}

int main()
{
     cout << fakeBin("456");
}