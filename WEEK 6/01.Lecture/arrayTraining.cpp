/*
  Arrays
  - Guess The Number From Sequences Game
*/

#include <array>
#include <iostream> 
using namespace std;

int main()
{
     int points = 0;
     int answers [3];

     cout << " Type the Missing number in sequences \n";
     cout << "Sequence 1\n";
     cout << "1, 5, 10, 16, ?? \n";
     cin >> answers[0];

     cout << "Sequence 2\n";
     cout << "2, 4, 8, 16, ?? \n";
     cin >> answers[1];

     cout << "Sequence 3\n";
     cout << "1, 1, 2, 3, ?? \n";
     cin >> answers[2];

     int sequences [3][5] = {
          {1, 5, 10, 16, 23},
          {2, 4, 8, 16, 32},
          {1, 1, 2, 3, 5}
     };

     if(answers[0] == sequences[0][4])
     {
          points++;
     }

     if(answers[1] == sequences[1][4])
     {
          points++;
     }

     if(answers[2] == sequences[2][4])
     {
          points++;
     }

     cout << "Your Points Are " << points << " From 3" << endl;

     switch(answers[0])
     {
          case 23 :
          break;

          default:
          cout << "Your first answer is wrong and the correct answer is : '23'" << endl;
          break;
     }

     switch(answers[1])
     {
          case 32 :
          break;

          default:
          cout << "Your second answer is wrong and the correct answer is : '32'" << endl;
          break;
     }

     switch(answers[2])
     {
          case 5 :
          break;

          default:
          cout << "Your third answer is wrong and the correct answer is : '5'" << endl;
          break;
     }
     
     return 0;
}