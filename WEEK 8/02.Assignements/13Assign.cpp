#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "Uknown")
{
     string greeting = "Hello ";
     if (gender == "Male")
     {
          greeting = greeting + "Mr " + name;

     }

     else if (gender == "Female")
     {
          greeting = greeting + "Miss " + name;

     }

     else 
     {
          greeting = greeting +name;
     }

     return greeting;
}



int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}