#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string p, string n, string d, bool option = true)
{
     string url = "";
     if (option)
     {
          url = p + "://www." + n + "." + d;
     }
     else
     {
          url = p + "://" + n + "." + d;
     }
     return url;
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
}