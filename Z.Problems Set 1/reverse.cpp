#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverse_words(const string& str)
{
  string temp = "";
  string output = "";
  
  for (int i = size(str)-1; i > (-1); i--)
  {
     if (str[i] != ' ')
     {
          temp[i] += str[i];
     }
  }
  
    return str;
}
     return strFinal;
}

int main ()
{
     cout << reverse_words("hello world!");
     return 0;
}