#include <iostream> 
using namespace std;

// void min(int x);

// int main()
// {
//     int nums[] = {10, -20, 30, -100, -50};

//     for (int i = 0; i < size(nums); i++)
//     {
//         min(nums[i]);
//     }
//     return 0;
// }

// void min(int x)
// {
//     int result;

//     if (x < result)
//     {
//         result = x;
//     }
    
//     if (x == -50) 
//     {
//         cout << result << endl;
//     }
// }

int main()
{
     int numsTwo []= {10, 20, 10, 10, 13, 13, 13, 100, 500, 499};

     int element = 0;
     int repeated = 0;

     for (int i = 0; i < size(numsTwo); i++)
     {
          element = numsTwo[i];
          for (int j = 0; j < size(numsTwo); j++)
          {
               if (j == i)
               {
                    continue;
               }
               
               if (element == numsTwo[j])
               {
                    repeated++;
               }
               
               else
               {
                    repeated = repeated;
               }
          }
     }

     cout << repeated << endl;

     return 0;


}