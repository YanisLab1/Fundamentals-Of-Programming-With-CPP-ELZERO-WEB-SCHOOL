

#include <iostream> 
using namespace std;

int main()
{
     /*
     
     Count Positive & Even Numbers Only

     int result = 0;
     int nums[] = {10, 20, -20, 13, 30, -30, 40};

     for (int i = 0; i < size(nums); i++)
     {
          if ( nums[i] > 0 && nums[i] % 2 == 0)
          {
               result += nums[i];
          }
     }
     cout << "Result Is: " << result << "\n"; 
     
     */

     /* Guess The Number Game

     int winNumber = 7;
     int guessTries = 3;
     int num;

     cout << "Please Guess The Winning Number Between 1 & 10\n";
     cin >> num;

     while ( num < 1 || num > 10)
     {
          cout << "Invalid input, try again." << endl;
          cin >> num;
     }

     while (num != winNumber)
     {
          guessTries--;
          if (guessTries == 0)
          {
               cout << "Sorry, You Failed. The Number Is: " << winNumber << "\n";
               break;
          }
          cout << "Sorry, Wrong Guess\n";
          cout << "Tries Remaining : " << guessTries << "\n";
          cin >> num;

          while ( num < 1 || num > 10)
          {
               cout << "Invalid input, try again." << endl;
               cin >> num;
          }
     }

     if (num == winNumber)
     {
          cout << "Great, Correct Guess\n";
     }

     cout << "Thanks for playing!";
     
     */

     int vals[5];
     int inp;

     cout << "Type 5 Numbers To Reverse\n";

     for (int i = 4; i > -1; i--)
     {
          cin >> inp;
          vals[i] = inp;
     }

     cout << "======================\n";

     for (int i = 0; i < size(vals); i++)
     {
          cout << vals[i] << "\n";
     }
     
     return 0;
}