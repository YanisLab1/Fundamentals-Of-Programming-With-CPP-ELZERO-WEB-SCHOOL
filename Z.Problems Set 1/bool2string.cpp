#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> 

using namespace std;

vector <string> renovateHouse(vector<string> tasks, vector<string> materials1, vector<string> materials2)

{
        // Write code here
        vector <string> materials = {};
        vector <string> renovate = {};

        reverse(tasks.begin(), tasks.end());

        merge(materials1.begin(), materials1.end(), materials2.begin(), materials2.end(), back_inserter(materials));

        merge(tasks.begin(), tasks.end(), materials.begin(), materials.end(), back_inserter(renovate));

        return renovate;
}

int main() 

{
    // Sample inputs
    vector<string> tasks = {"paint", "clean", "repair"};
    vector<string> materials1 = {"paint", "brush"};
    vector<string> materials2 = {"nails", "hammer"};

    // Call the function
    vector<string> result = renovateHouse(tasks, materials1, materials2);

    // Print the result
    cout << "Renovation plan: ";

    for (const string& item : result) 
    {
        cout << item << " ";
    }

    cout << endl;

    return 0;
}