/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;

*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
     int age = 500;
     cout << sizeof(age) << endl; // size of int 4

     short int ageTwo = 300;
     cout << sizeof(ageTwo) << endl; // when value is always small => size 2

     cout << sizeof(short) << endl;
     cout << sizeof(long int) << endl;
     cout << sizeof(long) << endl;
     cout << sizeof(long long int) << endl;
     cout << sizeof(long long) << endl;

     int numOne = 1;
     cout << numOne << endl;
     signed int numTwo = -2;
     cout << numTwo << endl;
     unsigned int numThree = -4; // unsigned int num_four = -4; // Problem
     cout << numThree << endl;

     using bignum = long long int; // or typedef long long int bignum;

     bignum my_number = 100010001000;
     cout << my_number << endl;

     return 0;
}