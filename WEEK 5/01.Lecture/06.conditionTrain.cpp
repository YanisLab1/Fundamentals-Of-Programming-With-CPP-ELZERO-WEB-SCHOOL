/*
  Control Flow
  - If Condition Trainings

  4 Training Apps
  - Even / Odd Checker
  - Find Greatest Number
  - User Rank Checker
  - Simple Calculator
*/

#include <iostream> 
using namespace std;

/* APP 1 : Even / Odd Checker
int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num; 

  if (num % 2 == 0)
    cout << "This number " << num << " is even!" << endl;
  else 
    cout << "This number " << num <<" is odd!" << endl;

  return 0;
}
*/

/* APP 2 : Find Greatest Number
int main()
{
  int a, b, c;
  cout << "Enter Three numbers: " << endl;
  cin >> a;
  cin >> b;
  cin >> c;
  if (a > b && a > c)
    cout << a << " is The Greatest Number"<< endl;
  else if (b > a && b > c)
    cout << b << " is The Greatest Number" << endl;
  else
    cout << c << " is The Greatest Number" << endl;
  return 0;
}
*/


/* APP3 User Rank Checker :
int main()
{
  int points;
  cout << "Your points are: ";
  cin >> points;
  string message;
  (points > 1000) ? message = "You are great!" : (500 < points && points <= 1000) ? message = "You did well" : (0 < points && points <= 500) ? message = "Not bad": message = "You have no rank";
  cout << message << endl;
}
*/

/* Simple Calculator : */
int main()
{
  int numOne, numTwo;
  string op;

  cout << "========================================" << endl;
  cout << "===  Welcome to your Calculator App  ===" << endl;
  cout << "========================================" << endl;
  cout << "                                        " << endl;
  cout << "Enter the first number: ";
  cin >> numOne;
  cout << "Choose the operation: (+) (-) (*) (/) ";
  cin >> op;
  cout << "Enter the Second number: ";
  cin >> numTwo;
  if (op == "+")
  {
    cout << "Result is " << numOne + numTwo << endl;
  }

  else if (op == "-")
  {
    cout << "Result is " << numOne - numTwo << endl;
  }

  else if (op == "/")
  {
    cout << "Result is " << numOne / numTwo << endl;
  }

  else if (op == "*")
  {
    cout << "Result is " << numOne * numTwo << endl;
  }

  else
  {
    cout << "you must choose a valid operator" << endl;
  }  
  
  return 0;
}