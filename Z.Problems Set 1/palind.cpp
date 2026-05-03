#include <string>
#include <iostream>
using namespace std;

bool isPalindrom (const string& str)
{
  string slower = "";
  for (size_t i = 0; i < str.length(); i++)
  {
     slower += tolower(str[i]);
  }

  bool isPalind = true;

  for (size_t j = 0; j < (size(slower) / 2); j++)
  {
   if (slower[j] != str[size(slower) - 1 - j])
   {
     isPalind = false;
     break;
   }
   
   if (slower[j] == str[size(slower) - 1 - j])
   {
     continue;
   }
 }
  return isPalind;
}

int main()
{
     cout << isPalindrom("Madam");
     return 0;
}