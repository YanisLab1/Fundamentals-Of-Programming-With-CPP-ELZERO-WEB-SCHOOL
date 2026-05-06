/*
  Control Flow
  - Switch Trainings
  --- Award System Application
  --- Discount Application
  --- Simple Calculator Application
*/

#include <iostream> 
using namespace std;

/* App 1:  Award System Application
int main()
{
  int num;
  cout << "Type the number: " << endl;
  cin >> num;

  switch (num)
  {
    case 100:
    case 110:
    case 120:
      cout << "Congrats for the Iphone\n";
      break;
    case 200: 
      cout << "Congrats for the Ipad\n";
      break;
    case 300: 
      cout << "Congrats for the Smart TV\n";
      break;
    case 400: 
      cout << "Congrats for the Gold Chain\n";
      break;
    default:
      cout << "Sorry No Award For This Number\n";
    
    return 0;
}
  */

/* App 2:  Discount Application
int main()
{
  int price = 100, discount = 10;
  int years;

  cout << "Type the Number of the Years in Company: ";
  cin >> years;

  switch (years)
  {
    case 1:
      discount = 20;
      break;
    case 2:
      discount = 40;
      break;
    case 3:
      discount = 80;
      break;
  }

  cout << "The Price is: " << price - discount << endl;

  return 0;
}
*/

/* App 3 : Simple Calculator Application
*/

int main()
{
  int numOne, numTwo;
  char op;
  cout << "========================================" << endl;
  cout << "===  Welcome to your Calculator App  ===" << endl;
  cout << "========================================" << endl;
  cout << "Enter the first number: ";
  cin >> numOne;
  cout << "Choose the operation: (+) (-) (*) (/): ";
  cin >> op;
  cout << "Enter the Second number: ";
  cin >> numTwo;

  switch (op)
  {
    case '+':
      cout << numOne << op << numTwo << " = " << numOne + numTwo;
      break;
    case '-':
      cout << numOne << op << numTwo << " = " << numOne - numTwo;
      break;
    case '/':
      cout << numOne << op << numTwo << " = " << numOne / numTwo;
      break;
    case '*':
      cout << numOne << op << numTwo << " = " << numOne * numTwo;
      break;
    default:
      cout << "you must choose a valid operator";
      break;
  }
}
