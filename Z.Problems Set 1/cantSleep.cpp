#include <string>
#include <iostream>

using namespace std;

std::string countSheep(int number) {
  // your code here
  string s = "";
  for (int i = 1; i <= number; i++)
    {
     s = i + " sheep...";
    }
    return s;
}

int main()
{
     cout << countSheep(3);
     return 0;
}