/*
  Control Flow
  - If ... else if ... else

  Syntax
  if (Condition Is True)
  {
    // Do Something
  }
*/

#include <iostream> 
using namespace std;

int main ()
{
     cout << "===== Guess The Number Game =====" << endl;
   
     cout << "                                 " << endl;

     cout << "Now Guess The number ?" << "\n";
     cout << "Hint : the Number is between 0 and 5 ?" << "\n";

     int number;
     cin >> number;

     while (number < 0 || number > 5)
     {
          cin >> number;
     }

     if (number == 3)
     {
          cout << "Winner!" << endl;
          
     } else cout << "You Loose!" << endl;
     
     return 0;
}