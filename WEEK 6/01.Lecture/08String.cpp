/*
  String
  - What Is String ?
  - String Types
  --- C Style String Using
  --- String Class Using Standard Library
  - Test Types Size
  - Null Terminated String
  - \0 => Null

  - Remember
  --- String Is Array Of Characters
*/

#include <array>
#include <iostream> 
using namespace std;

int main()
{
  cout << "Iam Dragon\n";   // 12
  cout << "Iam\0 Dragon\n"; // 12
  cout << "\n";

  char name_a[] = "Elzero"; // 7
  cout << name_a << "\n";   // Elzero(\0 = NULL) => to terminate string
  
  cout << sizeof(name_a) << "\n"; // 7
  cout << name_a[0] << endl;      // E
  cout << name_a[5] << endl;      // o
  cout << int('\b') << endl;
  cout << int(name_a[6]) << endl; // 0 ASCII Value of NULL (\0 at the end of string)

  cout << "============\n";
  
  // char name_b[] = {'E', 'l', 'z', 'e', 'o', '\0'};
  char name_b[] = {'E', 'l', 'z', 'e', 'o'};
  cout << name_a << "\n"; // Elzero(\0 )=> to terminate string
  cout << sizeof(name_a) << "\n"; // 7
  cout << name_a[0] << endl; // E
  cout << name_a[5] << endl; // o

  cout << "============\n";
  
  string name_c = "Elzero";
  cout << name_a << "\n";
  cout << name_c.length() << "\n"; // 6 characters 
  cout << sizeof(name_c) <<"\n";  // 32 size of the string object itself in memory
  cout << name_c[0] << endl; // E
  cout << name_c[5] << endl; // o

  return 0;
}