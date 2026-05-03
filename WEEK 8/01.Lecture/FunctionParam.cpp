/*
  Function
  - Parameters & Arguments
*/

#include <iostream> 
using namespace std;

void sayInfo(string msg, string name, int age);

int main ()
{
     sayInfo("Welcome", "Anis", 30);
     sayInfo("Hi", "Ossama", 35);
     

     return 0;
}

void sayInfo (string msg, string name, int age)
{
     cout << msg << " " << name << endl;
     cout << name << "\'Age is : " << age << endl;
}