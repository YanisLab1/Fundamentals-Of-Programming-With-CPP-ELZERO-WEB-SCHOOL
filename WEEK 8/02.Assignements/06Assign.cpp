#include <iostream>
using namespace std;

// Write Your Function Here
string swapping(string input)
{
     string phrase = ""; // or : char phrase[you have to determine size] = ""
     // string phrase = "" is better because it automatically allocates space for string
     // you dont need to specify phrase[the number of character] += to append string

     for (int i = 0; i < size(input); i++)
     {
          char c = input[i];

          if (c == 'H' || c == 'h')
          {
               phrase += c;
          }

          else if (c >= 'A' && c <= 'Z')
          {
               phrase += 'a' + (c-'A');
          }

          else if (c >= 'a' && c <= 'z')
          {
               phrase += 'A' + (c-'a');
          }

          else
          {
               phrase += c;
          }
     }

     return phrase;
}
               
int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}