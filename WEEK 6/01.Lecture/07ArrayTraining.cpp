/*
  Arrays
  - Guess The Number From Sequences Game
*/

#include <iostream>
#include <array>
using namespace std;

int main ()
{
  int points = 0;
  int answers[3];
  int sequences[3][5] = {
    {1, 5, 10, 16, 23},
    {2, 4, 8, 16, 32},
    {1, 1, 2, 3, 5}
  };

  cout << "Type the missing number in Sequences: " << endl;

  cout << "Sequence 1 " << endl;
  cout << sequences[0][0] << " | " << sequences[0][1] << " | " << sequences[0][2] << " | " << sequences[0][3] << " | 2?? " <<endl;
  cin >> answers[0];

  cout << "Sequence 2 " << endl;
  cout << sequences[1][0] << " | " << sequences[1][1] << " | " << sequences[1][2] << " | " << sequences[1][3] << " | ?? " <<endl;
  cin >> answers[1];

  cout << "Sequence 3 " << endl;
  cout << sequences[2][0] << " | " << sequences[2][1] << " | " << sequences[2][2] << " | " << sequences[2][3] << " | ?? " <<endl;
  cin >> answers[2];

  //if (answers[0] == sequences[0][4])
  //  points++;
  //if (answers[1] == sequences[1][4])
  //  points++;
  //if (answers[2] == sequences[2][4])
  //  points++;

  switch(answers[0])
  {
    case 23 :
    points++;
    break;
    
    default:
    cout << "Your first answer is wrong, correct answer is : 23" << endl;
    break;
  }
  
  switch(answers[1])
  {
    case 32 :
    points++;
    break;
    
    default:
    cout << "Your second answer is wrong, correct answer is : 32" << endl;
    break;
  }
  
  switch(answers[2])
  {
    case 5 :
    points++;
    break;
    
    default:
    cout << "Your third answer is wrong, correct answer is : 5" << endl;
    break;
  }

  cout << "Your Points are: " << points << " From 3" << endl;

  return 0;

}