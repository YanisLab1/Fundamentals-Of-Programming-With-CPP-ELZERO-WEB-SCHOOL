/*
  Control Flow
  - Switch Trainings
  --- Award System Application
  --- Discount Application
  --- Simple Calculator Application
*/

#include <iostream> 
using namespace std;

int main()
{
     /*int num;
     cout << "Type the number" << endl;
     cin >> num;

     switch(num)
     {
          case 100 : 
          case 110 :
          case 120 :
          cout << "Congrats for the Iphone" << "\n";
          break;

          case 200 : 
          case 210 :
          case 220 :
          cout << "Congrats for the Ipad" << "\n";
          break;

          case 300 : 
          case 310 :
          case 320 :
          cout << "Congrats for the Imac" << "\n";
          break;

          default :
          cout << "We are sorry" << "\n";
          break;
     }*/

     /* int price = 1000;
     int discount = 10;
     int years;

     cout << "Type the number of years in our company " << "\n";
     cin >> years;

     switch (years)

     {
          case 0 : 
          cout << "Your discounted price is: " << price << endl;
          break;

          case 1 : 
          cout << "Your discounted price is: " << price - discount << endl;
          break;

          case 2 :
          case 3 : 
          case 4 : 
          cout << "Your discounted price is: " << price - (2*discount) << endl;
          break;

          case 5 :
          cout << "Your discounted price is: " << price - (5*discount) << endl;
          break;

          default :
          cout << "Your discounted price is: " << price - (10*discount) << endl;
     } */

     int n1, n2, op;
     cout << "Type the first number : " << endl;
     cin >> n1;
     cout << "Type the second number : " << endl;
     cin >> n2;
     cout << "Choose the operation number : " << endl;
     cout << "[1] + addition\n";
     cout << "[2] - subtraction\n";
     cout << "[3] * multiplication\n";
     cout << "[4] \\ division\n";
     cin >> op;

     switch(op)
     {
          case 1 :
          cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
          break;

          case 2 :
          cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
          break;

          case 3 :
         cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
          break;

          case 4 :
          cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
          break;

          default :
          cout << "choose a valid operation from the list, repeat" << endl;
     }

     return 0;
}