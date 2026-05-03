#include <iostream> 

using namespace std;

bool isDivisible(int n, int x, int y)
{
     return (n % x == 0) ? ((n % y == 0) ? true : false) : false;
}

int main()
{

    cout << isDivisible(20, 5, 4) << endl; // 1 => True
    cout << isDivisible(200, 7, 9) << endl; // 0 => False

    return 0;
}