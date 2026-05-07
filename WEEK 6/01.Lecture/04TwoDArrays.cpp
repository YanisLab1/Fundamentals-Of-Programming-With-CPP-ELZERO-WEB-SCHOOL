/*
  Arrays
  - Two Dimensional Arrays AKA [2D Array]

  Search For
  - Matrix Operations
  - 3D Array
*/

#include <iostream> 
using namespace std;

int main()
{
  int pointsOne[3] = {1,2,3};
  int pointsTwo[3] = {3,4,5};
  int pointsThree[3] = {6,7,8};

  // Good Practice
  const int rows = 3; // Number of Arrays to make one Multi Dimensions Arrays
  const int columns = 3; // number of Element in arrays 
  int points[rows][columns] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  cout << points[1][2] << "\n"; // 6
  cout << points[2][0] << "\n"; // 7
  cout << points[2][2] << "\n"; // 9

  // Bad Practice
  // int points[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  // cout << points[1][2] << "\n"; // 6
  // cout << points[2][0] << "\n"; // 7
  // cout << points[2][2] << "\n"; // 9

  return 0;
}