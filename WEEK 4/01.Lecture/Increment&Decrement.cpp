/*
  Operators & Operands
  "Symbols To Operate On Data"

  - Increment And Decrement Operators
  "For incrementing And Decrementing Values"

  --- Pre/Post Increment
  --- Pre/Post Decrement
*/ 

#include <iostream>
using namespace std;

int main()
{
     int likes = 0;
     cout << likes++ << "\n"; // post increment after cout 
     cout << likes << "\n";   // now increment happened

     cout << "=============\n";

     int views = 0;
     cout << ++views << "\n"; // pre increment before cout 
     cout << views << "\n";   // already increment happened

     cout << "=============\n";

     int followers = 1;
     cout << followers-- << "\n"; // post decrement after cout 
     cout << followers << "\n";   // now decrement happened

     cout << "=============\n";
 
     int balance = 0;
     cout << --balance << "\n"; // pre decrement before cout 
     cout << balance << "\n";  // already decrement happened

 return 0;
}