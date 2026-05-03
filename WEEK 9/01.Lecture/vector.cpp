/*
  Vector
  - What Is Vector ?
  --- Vector Is A Container For Similar Data Like Array
  --- Vectors Are Dynamic Arrays => Array That Can Change In Size
  --- Vector Is A Class Template
  - Vector Syntax => vector<Type> VariableName
  - Vector Create With All Methods
  - Loop On Elements
  - Important Notes

  We Will Cover The Comparison With Array Later
*/

#include <iostream> 
#include <vector>

using namespace std;

int main()
{
     vector<int> numsOne = {10, 20, 30, 40};
     vector <int> numsTwo{10, 20, 30, 40, 50};
     vector<int> numsThree(4, 50);

     for (int i = 0; i < numsOne.size(); i++)
     {
          cout << numsOne.at(i) << " " ;
     }

     cout << "\n===========\n";

     for (int i = 0; i < numsTwo.size(); i++)
     {
          cout << numsTwo.at(i) << " " ;
     }

     cout << "\n===========\n";

     for (int i = 0; i < numsThree.size(); i++)
     {
          cout << numsThree.at(i) << " " ;
     }

     cout << "\n===========\n";

     cout << numsThree.size() << endl;

     numsThree.push_back(1000);
     numsThree.front() = 1000;

     cout << numsThree.size() << endl;
     cout << numsThree.front() << endl;

     for (int i = 0; i < numsThree.size(); i++)
     {
          cout << numsThree.at(i) << " " ;
     }

     return 0;
}
