#include <iostream>
using namespace std;

int main()
{
     // Friends Array
     string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

     // Output Needed
     // "Mohamed"
     // "Sayed"

     // for (int i = 0 + 1; i < size(friends)-1; i++)
     // {
     //      cout << friends[i] << endl;
     // }

     int i = 0 + 1;

     while (i< size(friends) - 1)
     {
          cout << friends[i] << "\n";
          i++;
     }

     return 0;
}