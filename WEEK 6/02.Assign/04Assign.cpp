#include <iostream> 
using namespace std;

int main()
{

     // Example 1
     // int vals[]{100, 200, 250, 400, 200};
     // Example 2
     //int vals[]{100, 200, 500, 400, 200};
     // Example 3
     int vals[]{100, 200, 600, 400, 200};


     if (vals[0] + vals [size(vals) - 1] > vals[size(vals)/2])
     {
          cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
          cout << vals[0] << " + " << vals [size(vals) -1] << " > " << vals[size(vals)/2] << endl;
          cout << vals[0] + vals [size(vals) -1] << " > " << vals[size(vals)/2];
     }

     // Needed Output
     //"First Number + Last Number Is Larger Than Middle Number"
     //"100 + 200 = 300"
     //"300 > 250"

     else if (vals[0 + 1] + vals [size(vals) - 2] > vals[size(vals)/2])
     {
          cout << "Second Number + Before Last Number Is Larger Than Middle Number" << endl;
          cout << vals[0 + 1] << " + " << vals [size(vals) - 2] << " > " << vals[size(vals)/2] << endl;
          cout << vals[0 + 1] + vals [size(vals) - 2] << " > " << vals[size(vals)/2];
     }

     // Needed Output
     //"Second Number + Before Last Number Is Larger Than Middle Number"
     //200 + 400 = 600"
     //"600 > 500"

     else 
     {
          cout << "Middle Number Is The Largest" << endl;
          cout << vals[size(vals)/2];
     }

     // Needed Output
     //"Middle Number Is The Largest"
     // "600"

     return 0;
}