#include <iostream>

using namespace std;


string rps(const string& p1, const string& p2)
{
     if (p1[0] == p2[0])
     {
          return "Draw!";
     }

     else if (p1[0] != 's' || p2[0] != 's')
     {
          if ((p1[0] == 'r' && p2[0] == 'p') ||
          (p1[0] == 'p' && p2[0] == 'r'))
          {
          int scorepl1 = 'a' - p1[0];
          int scorepl2 = 'a' - p2[0];

          return (scorepl1 > scorepl2 ) ? "Player 1 won!" : "Player 2 won!";
          }
     }

     if (p1[0] == 's' || p2[0] == 's')
     {
          if(p1[0] == 'r' || p2[0] == 'r')
          {
               int scorepl1 = 'a' - p1[0];
               int scorepl2 = 'a' - p2[0];
               
               return (scorepl1 > scorepl2 ) ? "Player 1 won!" : "Player 2 won!";
          }

          else if(p1[0] == 'p' || p2[0] == 'p')
          {
               int scorepl1 = p1[0] - 'a';
               int scorepl2 = p2[0] - 'a';
               
               return (scorepl1 > scorepl2 ) ? "Player 1 won!" : "Player 2 won!";
          }
     }

     else 
     {
          return "";
     }
}

int main()
{
     cout << rps("rock", "scissors");
}