/*
  Variables Basic knowledge
    - Data container with unique name "identifier"
    - Declare with value and change later

  Syntax
    - [Data_Type][Variable_Name] = [Value]

  "using namespace std;" : tells the compiler to look for cout inside library.
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Price is : 100";
  cout << "\nafter adding 15 is : " << 100 + 15;
  cout << "\nafter adding 50 is : " << 100 + 50;

  int price = 100;
  cout << "\nPrice is : " << price;
  cout << "\nafter adding 15 is : " << price + 15;
  cout << "\nafter adding 50 is : " << price + 50;

  price = 150;
  cout << "\nThe New Price is " << price;
  return 0;
}