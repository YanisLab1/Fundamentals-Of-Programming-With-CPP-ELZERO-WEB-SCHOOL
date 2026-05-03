#include <iostream>
#include <string>
using namespace std;

int main()
{
     // Friends Array
     string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

     for (int i = 0; i < size(friends); i++)
     {
          if (friends[i][0] == 'A')
          {
               cout << friends[i] << endl;
          }
     }
     
     // Output Needed
     //"Ahmed"
     //"Ashraf"
     //"Amany"

     return 0;
}