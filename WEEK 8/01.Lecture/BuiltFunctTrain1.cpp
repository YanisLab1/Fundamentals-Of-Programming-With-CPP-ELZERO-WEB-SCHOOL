

#include <iostream> 
using namespace std;

//void lowerupper(char s);
void space(char c);

int main ()
{
     //string nameOne = "ElZEro";
     string nameTwo = "El  \tz  \ne                           ro";

     for (int i = 0; i < size(nameTwo); i++)
     {
          space(nameTwo[i]);
     }
     cout << "\n";
     return 0;
}

// void lowerupper(char s)
// {
//      int c = int(s);
//      if (c >= int ('A') && c<= int ('Z'))
//      {
//           c = c - int('A');
//           c = int('a') + c;
//           cout << char (c);
//      }

//      else if (c >= int ('a') && c<= int('z'))
//      {
//           c = c - int('a');
//           c = int('A') + c;
//           cout << char (c);
//      }

//      else 
//      {
//           cout << "(NA)";
//      }
// }

void space(char c)
{
     int s = int(c);
     if (s == int(' ') || s == '\t' || s == '\n')
     {
         cout << "";
     }

     else 
     {
          cout << char(s);
     }
}