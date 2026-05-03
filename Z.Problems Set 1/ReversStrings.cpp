
#include <algorithm>
#include <iostream> 
#include <string>

using namespace std;

string reverseString (const string str )
{
  // your Code is Here ... enjoy !!!
  reverse(str.begin(), str.end());
  
  return str;
}

int main()
{
     cout << reverseString ("Hello") << endl;

}