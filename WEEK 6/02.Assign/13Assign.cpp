#include <array>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  string fName = "Elzero ";
  string mName = "Web ";
  string lName = "School";

  // Output Needed
  //Elzero Web School
  cout << fName << mName << lName << endl;
  
  //Elzero Web School
  cout << fName + mName + lName << endl;

  //Elzero Web School
  cout << fName.append(mName).append(lName) << endl;  
  
return 0;
}