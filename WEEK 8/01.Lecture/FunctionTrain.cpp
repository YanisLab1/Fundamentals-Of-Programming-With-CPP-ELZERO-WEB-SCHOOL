#include <iostream>
using namespace std;

void iceBox (string item, string msg)
{
     if (item == "CocaCola")
     {
          if (msg == "Cold")
          {
               cout << item << " will be " << msg << endl;
          }
          else 
          {
               cout << item << " is here" << endl;
          }
     }

     else if (item == "Apple")
     {
          if (msg == "Fresh")
          {
               cout << item << " will be " << msg << endl;
          }
          else 
          {
               cout << item << " is here" << endl;
          }
     }

     else 
     {
          cout << item << " " << msg << endl;
     }
}

void calc(int numOne, int numTwo, char operation)
{
     if (operation == '+')
     {
          cout << numOne << " " << operation << " " << numTwo << " = " << numOne + numTwo << endl;
     }

     else if (operation == '-')
     {
          cout << numOne << " " << operation << " " << numTwo << " = " << numOne - numTwo << endl;
     }

     else if (operation == '/')
     {
          cout << numOne << " " << operation << " " << numTwo << " = " << numOne / numTwo << endl;
     }

     else if (operation == '*')
     {
          cout << numOne << " " << operation << " " << numTwo << " = " << numOne * numTwo << endl;
     }

     else 
     {
          cout << "please enter a valid operator\n" << endl;
     }
}

int main()
{
     iceBox("CocaCola", "Cold");
     iceBox("Apple", "Good");
     iceBox("Banana", "Fresh");

     cout << "===============\n";

     calc(27, 9, '-');

     return 0;
}