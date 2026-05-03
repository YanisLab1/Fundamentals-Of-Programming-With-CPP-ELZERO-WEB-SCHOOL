/*
  Pointers
  -- Pointing To Array
*/

#include <iostream> 

using namespace std;

int main()
{
     short int array[]{10, 20, 30, 40};
     short int *ptr = array;
     // normal int : address[0] => ...0; address[1] => ...4
     // short int : address[0] => ...0; address[1] => ...2

     cout << "\nFirst Element is: \n\n";

     cout << "First Element With Index: " << array[0] << endl;
     cout << "First Element With Pointer: " << *ptr << endl;
     cout << "Address With Index: " << &array[0] << endl;
     cout << "Address With Pointer: " << ptr << endl;

     cout << "\nSecond Element is: \n\n";

     cout << "Second Element With Index: " << array[1] << endl;
     cout << "Second Element With Pointer: " << *(ptr+1) << endl;
     cout << "Address With Index: " << &array[1] << endl;
     cout << "Address With Pointer: " << ptr + 1 << endl;

     cout << "\nThird Element is: \n\n";

     cout << "Third Element With Index: " << array[2] << endl;
     cout << "Third Element With Pointer: " << *(ptr+2) << endl;
     cout << "Address With Index: " << &array[2] << endl;
     cout << "Address With Pointer: " << ptr + 2 << endl;

     cout << "\nLast Element is: \n\n";

     cout << "Last Element With Index: " << array[3] << endl;
     cout << "Last Element With Pointer: " << *(ptr+3) << endl;
     cout << "Address With Index: " << &array[3] << endl;
     cout << "Address With Pointer: " << ptr + 3 << endl;

     return 0;
}