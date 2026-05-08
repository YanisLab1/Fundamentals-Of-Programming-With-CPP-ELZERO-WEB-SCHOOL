/*
  Loop
  - Nested Loop For
*/

#include <iostream>
using namespace std;

int main()
{
  string products[] = {"Item 1", "Item 2", "Item 3"};
  string sizes[] = {"Small", "Large", "X-Large"};

  for (int i = 0; i < size(products); i++)
  {
    cout << "Product Name:\n";
    cout << products[i] << "\n";

    cout << "Sizes:\n";
    for ( int j = 0; j < size(sizes); j++)
    {
      cout << sizes[j]; // if we add "\n" here it will go to new line 
      if (j < 2)
      {
        cout << ", ";
      }
    }
    cout << "\n";
    cout << "=====================\n";
  }
  
  return 0;
}