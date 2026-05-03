/*
  Data Types
  - What Is Data ?
  - Data Examples In Real Life
  --- Integer => 5000, 10, -100
  --- String => "Elzero Web School", "Osama Elzero", "100A"
  --- Boolean => true 1, false 2
  --- Float => 18.5, 1900.50
  --- Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
  - Why We Choose Data ?
  --- Size
  --- Operation

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/

#include <iostream>
using namespace std;

int main()
{
  int num = 2;
  char c = 'b';
  string name = "Anis";
  bool status = true;

  cout << sizeof(num) << "\n";
  cout << sizeof(c) << "\n";
  cout << sizeof(name) << "\n";
  cout << sizeof(status) << "\n";

  int numOne = 100;
  int numTwo = 30;
  string nameOne = "Boukhatem";

  float result = (float) numOne / (float) numTwo ;
  cout << result << "\n" ;

  // int resultTwo = numOne / nameOne; cant do this operation beacause of data type string 

  return 0;
}