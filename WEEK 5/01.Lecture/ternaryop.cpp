/*
  Control Flow
  - Ternary Operator

  Syntax
  (Condition ? True : False );
*/

#include <iostream> 
using namespace std;

int main()
{
     int age = 20;
     int points = 100;

     /*if (age >= 18)
     {
          if (points >= 500)
          {
               cout << "You're Invited" << endl;
          }
     }*/

     string msg = (age >= 18 ? "points need to be verified": "You're not invited" );

     cout << (msg ==  "You're not invited" ? "We're sorry" : " ");
   
     cout << (msg == "points need to be verified" ? (points >= 500 ? "You're Invited" : "We're sorry") : " ");

     return 0;
}