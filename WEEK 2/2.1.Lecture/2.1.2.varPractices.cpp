/*
  Variables Naming Rules & Best Practices

    - Naming Rules
      - Must Be Unique
      - Case Sensitive (price and Price are different)
      - Variable name can include numbers but cannot start with them
      - Letters, Underscore or number (when within) are okay to name your variable with
      - No White Space Or Special Characters
      - Reserved Keywords "Class, Public"

    - Best Practices
      - Related Names to Data Stored in Variable
      - Writing Style (camelCase in C++)
*/

#include <iostream>
using namespace std;

int main()
{
    int price = 100; // Decalre a value
    price = 200; // Update a value
    cout << price;
    cout << "\n===============\n";
    int Price = 150;
    cout << Price;
    cout << "\n===============\n";
    int n2um1 = 1;
    cout << n2um1;
    cout << "\n===============\n";
    int _num_bers_ = 2;
    cout << _num_bers_;
    cout << "\n===============\n";
    int publics = 1000;
    cout << publics;
    cout << "\n===============\n";
    int ANISBOUKHATEM = 500; // Bad Style
    cout << ANISBOUKHATEM;
    cout << "\n===============\n";
    int x = 3000; // not expressive or specific
    cout << x;
    return 0;
}
