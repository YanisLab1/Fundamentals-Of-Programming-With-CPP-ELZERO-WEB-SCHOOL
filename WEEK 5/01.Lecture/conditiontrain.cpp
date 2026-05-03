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

/* APP 1

int main()
{
     int num;
     cin >> num;
 
     if (num % 2 == 0)
     {
          cout << "This Number: " << num << " Is Even" << endl;
     } else cout << "This Number: " << num <<  " Is Odd" << endl;
     
     return 0;
} */

/* APP 2

int main()
{
     int numOne;
     int numTwo;
     int numThree;
     cin >> numOne >> numTwo >> numThree;
     

     if (numOne > numTwo && numOne > numThree)
     {
          cout << "Number : " << numOne << " is the Greatest" << endl;
     } 

     else if (numTwo > numOne && numTwo > numThree)
     {
          cout << "Number : " << numTwo << " is the Greatest" << endl;
     }

     else
     {
          cout << "Number : " << numThree << " is the Greatest" << endl;
     }

     return 0;
} */

/* APP3 

int main()
{
     int points;
     cin >> points;

     while (points < 0)
     {
          cin >> points;
     }
     
     if (points <= 500)
     {
          cout << "it's not enough" << endl;
     }

     else if (500 < points && points <= 1000)
     {
          cout << "Not Bad" << endl;
     }

     else 
     {
          cout << "Great Job" << endl;
     }

     return 0;
} */

int main()
{
     int numOne, numTwo;
     string op;

     cin >> numOne >> op >> numTwo;

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