#include <iostream>
#include <string>

using namespace std;

std::string even_or_odd(int number)
{
     return (number % 2 == 0) ? "Even" : "Odd";
} 

int main()
{
     cout << even_or_odd(4) << endl;
     cout << even_or_odd(5) << endl;

     return 0;
}

