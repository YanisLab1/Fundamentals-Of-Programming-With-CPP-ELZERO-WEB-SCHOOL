#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  switch (num)
  {
  case 10:
    /* code */
    cout << "Case 1\n";
    break;
  case 20:
    /* code */
    cout << "Case 2\n";
    break;
  case 30:
  case 31:
  case 32:
    /* code */
    cout << "Case 3\n";
    break;
  default:
    /* code */
    cout << "Invalid Number\n";
    break;
  }

  return 0;
}