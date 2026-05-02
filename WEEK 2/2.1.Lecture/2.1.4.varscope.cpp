/*  Variables Scope
    - Global Variable
    - Local Variable
*/

#include <iostream>
using namespace std;

int a = 100; // Global variable 

int second() 
{
    int b = 50;
    cout << a << " coming from second function\n";
    return 0;
}

int main()
{   
    // second(); ===> here if you want second to be printed first 
    cout << a << " coming from main function\n";
    // cout << b; ===> undefined : variable b is local to second() function
    second();
    return 0;
}