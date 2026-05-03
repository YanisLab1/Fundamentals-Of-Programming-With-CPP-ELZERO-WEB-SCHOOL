#include <iostream>
#include <string.h>
using namespace std;

int main()
{
     string fName = "Elzero ";
     //char fName[20] = "Elzero "; why [20]? strcat is adding the size of mName and lNme to fName
     string mName = "Web ";
     //char mName[12] = "Web "; why [12]? strcat is adding the size of lName to mName
     string lName = "School";
     //char lName[7] = "School"; this stays [7] elements count with \0, no strcat to append string

     /* Output Needed
     Elzero Web School
     Elzero Web School
     Elzero Web School*/

     cout << fName + mName + lName << endl;
     cout << fName << mName << lName << endl;
     cout << fName.append(mName.append(lName)) << endl;
     //cout << strcat(fName, mName); 
     //cout << strcat(lName, " "); << endl;

     //cout << strcat(fName, strcat(mName, lName)); << end;

     return 0;
}