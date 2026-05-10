#include <iostream>
using namespace std;

int main()
{
     // Friends Array
     string friends[] = {"Ahmed", "Osama", "Ameer"};

     for (int i = 0; i < size(friends); i++)
     {
          cout << "=========" << endl;
          cout << "= " << friends[i] << " =" << endl;
          cout << "==================" << endl;
          cout << "== ";
          for (int j = 0; j < size(friends[i]); j++)
          {
               cout <<friends[i][j];

               if (j < size(friends[i]) -1)
               {
                    cout << ", ";
               }
               else
               {
                    cout << " =";
               }
          }
          cout << "\n";
          cout << "==================\n";
          cout << "                \n";
     }

     return 0;
}