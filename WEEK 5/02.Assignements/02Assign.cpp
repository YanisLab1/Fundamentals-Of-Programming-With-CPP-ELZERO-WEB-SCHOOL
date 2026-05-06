#include <iostream>
using namespace std;

int main()
{
// Test Case 1
int age = 18;
int points = 450;

if (age > 18)
  cout << "Yes Age Is Ok" << endl;
else 
  cout << "No Age Is Not Ok" << endl;

if (points > 500)
  cout << "Yes Points are Ok" << endl;
else 
  cout << "No Points Is Not Ok" << endl;

// Test Case 2
int ageTwo = 20;
int pointsTwo = 450;

if (ageTwo > 18)
  cout << "Yes Age Is Ok" << endl;
else 
  cout << "No Age Is Not Ok" << endl;

if (pointsTwo > 500)
  cout << "Yes Points are Ok" << endl;
else 
  cout << "No Points Is Not Ok" << endl;

// Test Case 3
int ageThree = 20;
int pointsThree = 650;

if (ageThree > 18)
  cout << "Yes Age Is Ok" << endl;
else 
  cout << "No Age Is Not Ok" << endl;

if (pointsThree > 500)
  cout << "Yes Points are Ok" << endl;
else 
  cout << "No Points Is Not Ok" << endl;

// Output
//"No Age Is Not Ok"
//"No Points Is Not Ok"

// Output
//"Yes Age Is Ok"
//"No Points Is Not Ok"

// Output
//"Yes Age Is Ok"
//"Yes Points Is Ok"
return 0;
}