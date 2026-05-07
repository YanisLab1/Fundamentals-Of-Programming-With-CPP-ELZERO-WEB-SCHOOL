#include <iostream>
using namespace std;

int main()
{
  // Example 1
  //int vals[]{100, 200, 250, 400, 200};
  //int vals[]{100, 200, 500, 400, 200};
  int vals[]{100, 200, 600, 400, 200};

  if ((vals[0]+vals[sizeof(vals)/sizeof(vals[0]) - 1]) > vals[(sizeof(vals)/sizeof(vals[0]) - 1)/2])
  {
    cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
    cout << vals[0] << " + " << vals[sizeof(vals)/sizeof(vals[0]) - 1] << " = " << vals[0] + vals[sizeof(vals)/sizeof(vals[0]) - 1] << "\n";
    cout << vals[0] + vals[sizeof(vals)/sizeof(vals[0]) - 1] << " > " << vals[(sizeof(vals)/sizeof(vals[0]) - 1)/2] << endl;
  }

  else if ((vals[1] + vals[sizeof(vals)/sizeof(vals[0]) - 2]) > vals[(sizeof(vals)/sizeof(vals[0]) - 1)/2])
  {
    cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
    cout << vals[1] << " + " << vals[sizeof(vals)/sizeof(vals[0]) - 2] << " = " << vals[1] + vals[sizeof(vals)/sizeof(vals[0]) - 2] << "\n";
    cout << vals[1] + vals[sizeof(vals)/sizeof(vals[0]) - 2] << " > " << vals[(sizeof(vals)/sizeof(vals[0]) - 1)/2] << endl;
  }

  else 
  {
    cout << "Middle Number Is The Largest" << endl;
    cout << vals[(sizeof(vals)/sizeof(vals[0]) - 1)/2] << endl;
  }
  
  // Needed Output
  //"First Number + Last Number Is Larger Than Middle Number"
  //"100 + 200 = 300"
  //"300 > 250"
  
  // Example 2
  //int vals[]{100, 200, 500, 400, 200};
  
  // Needed Output
  //"Second Number + Before Last Number Is Larger Than Middle Number"
  //"200 + 400 = 600"
  //"600 > 500"
  
  // Example 3
  //int vals[]{100, 200, 600, 400, 200};
  
  // Needed Output
  //"Middle Number Is The Largest"
  //"600"

  return 0;
}