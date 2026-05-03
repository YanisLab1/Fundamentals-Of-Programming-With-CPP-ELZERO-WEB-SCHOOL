/*
  Function
  - Return Statement
  --- Return vs No Return Examples
  --- Return As Value In Variable
  --- Main Function Return Test
  --- Nothing After Return
  --- Void With Return ...! Why ?
*/

#include <iostream>
using namespace std;

// void calc(int n1, int n2)
// {
//   cout << n1 + n2 << "\n";
//   return;
//   cout << "Will Not Show";
// }

 int calc(int n1, int n2)
 {
   cout << "Operation Is Done\n";
   return n1 + n2;
   cout << "Will Not Show";
 }

int main()
{
  //calc(10, 20);
  int result = calc(10, 20);
   cout << result * 5 << "\n";
   cout << result + 20 << "\n";
  return 0;
}