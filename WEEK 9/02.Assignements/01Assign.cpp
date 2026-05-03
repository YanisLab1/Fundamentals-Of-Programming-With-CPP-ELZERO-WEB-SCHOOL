#include <iostream> 
#include <vector> 

using namespace std;

int main()
{
     vector<int> numbers {100, 200, 300, 400};

     vector <int> :: iterator iterate;

     for (iterate = numbers.begin(); iterate != numbers.end(); ++iterate)
     {
          cout << *iterate << endl;
     }
     
     numbers.push_back(500);

     cout << "The first element is : " << numbers.front() << endl;
     cout << "The last element is : " << numbers.back() << endl;

     return 0;
}