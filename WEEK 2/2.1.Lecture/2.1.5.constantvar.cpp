/*
  Constant Variable
  - Read Only Value
  - Can't Declare Without Value
*/

#include <iostream>

using namespace std;
#define DAYS 9


int main ()
{
    const int day = 8;
    // int salary = 10 000; after a while salary = 15 000 
    const int num = 10;
    cout << num;
    // const int x; cant declare constant and don't assign value; 
    cout << "\n" << DAYS;
    return 0;
}