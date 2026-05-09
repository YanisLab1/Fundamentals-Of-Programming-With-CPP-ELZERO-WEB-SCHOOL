/*
  Loop
  - Compare
  --- For => Specific Number Of Loops
  --- While => Loop As Long Condition Is True
  --- Do While => Always Execute Once

  Create Three Apps
  -- Count Positive & Even Numbers Only
  -- Guess The Number
  -- Reversed Elements From User
*/

#include <iostream> 
using namespace std;

int main()
{
  // Count Positive and Even Numbers
  int result = 0;
  int nums[] = {10, 20, -20, 13, 30, -30, 40};

  for (int i = 0; i < size(nums); i++)
  {
    if (nums[i] % 2 == 0 && nums[i] > 0)
    {
      result += nums[i];
    }
    else
    {
      continue;
    }
  }
  cout << result << endl;

  cout << "======================\n";

  // Guess The Number
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
  
  if (num == winNumber)
  {
    cout << "Great, " << num << " is The Correct Guess\n";
  
  cout << "Thanks for playing!" <<endl;
  }  
  } 

cout << "======================\n";

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