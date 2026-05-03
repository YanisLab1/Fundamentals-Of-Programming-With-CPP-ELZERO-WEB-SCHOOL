/*
  Pointers
  -- Void, Wild Pointer And Null
*/

#include <iostream> 

using namespace std;

int main()
{
     int *ptr1; // Wild Pointer
     
     int *ptr2 = NULL;
     
     int *ptr3 = nullptr;

     cout << ptr1 << "\n"; // Garbage Value
     
     cout << ptr2 << "\n"; // 0
     
     cout << ptr3 << "\n"; // 0

     int num = 100;
     void *ptr = &num; 
     // to neglect type of Data stored at the memory address

     cout << ptr << endl;

     // C-Style Cast
     cout << *(int *) ptr << endl;

     // Modern Style Cast
     cout << *(static_cast<int *>(ptr)) << endl;

     return 0;
}