#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int> numbers { 10, 20, 30, 40 };

     cout << numbers[0] << " ";
     cout << numbers.front() << " ";
     cout << numbers.at(0) << " ";
     vector <int> :: iterator it = numbers.begin();
     cout << *it << " ";

     cout << "\n===========\n";

     cout << numbers[size(numbers) - 1] << " ";
     cout << numbers.back() << " ";
     cout << numbers.at(size(numbers) - 1) << " ";
     vector <int> :: iterator iter = numbers.begin();
     cout << *(iter + (size(numbers)-1)) << " ";

     return 0;
}