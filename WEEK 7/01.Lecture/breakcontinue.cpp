/*
  Loop
  - Break
  - Continue
*/

#include <iostream>
using namespace std;

int main()
{
     // int nums[] = {10, 20, 30, 40, 50};
     int nums1[] = {10, 20, 30, 40, 20, 50};

     for (int i = 0; i < size(nums1); i++)
     {
          cout << nums1[i] << "\n";
          if (nums1[i] == 20)
          {
               continue;
          }
          cout <<"After\n";
     }

     cout << "==========\n" ;

     int nums2[] = {10, 20, 30, 40, 20, 50};

     for (int i =0; i < size(nums2); i++)
     {
          cout << nums2[i] << "\n";

          if (nums2[i] == 10)
          {
               break;
          }
     }

     return 0;
}