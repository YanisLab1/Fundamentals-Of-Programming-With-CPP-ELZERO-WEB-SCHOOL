

#include <iostream> 
using namespace std;

int main()
{
     // Example 1
     //int vals[] = {100, 200, 600, 200, 100};

     // Example 2
     //int vals[] = {100, 200, 200, 100};

     // Example 3
     int vals[] = {100, 300, 600, 200, 100};

     if (vals[0] == vals[size(vals) - 1] && vals[0 + 1] == vals[size(vals) - 2] )
     {
          cout << "Array Is Palindrome" << endl;
     } 

     else 
     {
          cout << "Array Is Not Palindrome" << endl;
     }

     return 0;
}