#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int a, int b, const char operation[] = "add") 
// const char operation : to read-only the character cannot be modified
{
     int result;
     if (operation[0] == 'a' || operation[0] == 'A' )
     {
          result = a + b;
     }

     else if (operation[0] == 's' || operation[0] == 'S')
     {
          result = a - b;
     }

     else if (operation[0] == 'm' || operation[0] == 'M')
     {
          result = a * b;
     }

     else 
     {
          result = 0;
     }

     return result;
}

int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
}