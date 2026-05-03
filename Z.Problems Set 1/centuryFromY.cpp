#include <math.h> 
#include <iostream>

using namespace std;

int centuryFromYear(double year) 
{ 
  year = year / 100;
  return ceil(year);
}

int main()
{
     cout << centuryFromYear(1767) << endl;
     cout << centuryFromYear(2025) << endl;

     return 0;
}