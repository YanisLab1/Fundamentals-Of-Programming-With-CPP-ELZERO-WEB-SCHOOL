#include <string>
#include <iostream>
using namespace std;

string gimme_the_letters(const string& sp)
{
  string output = "";

  int i = 0;
  for(;;)
  {
     output += char(int(sp[0]) + i);
    i++;
     if (char(int(sp[0]) + i) == sp.back() + 1)
    {
      break;
    }
    
  }
    return output;
}

int main()
{
     cout << gimme_the_letters("a-f");
}