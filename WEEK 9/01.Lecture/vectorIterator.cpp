/*
  Vector
  - Iterator

  --- Containers
  ------ Array
  ------ Vector
  ------ List

  --- What Is Iterators
  ------ Iterators Used To Point To Memory Address Of The Container

  --- Why We Use Iterators
  [1] Simplify The Code => No Need To See The Full Iteration On Containers
  [2] Support For Many Algorithms Like Sorting And Finding
  [3] Allow The Dealing With One Element Without The Need To Load The Full List
  [4] Work The Same Way With All Containers
  [5] It Reduce The Complexity And Execution Time Of The Application

  --- Syntax
  ------ Container<Type>::iterator IteratorName;

  --- Initialize
  ------ With Vector Syntax
  ------ With Auto Keyword

  --- Print
  ------ [*] Dereference => Dont Print The Iterator, Print What Its Point To

  --- Notes
  ------ This Is Not Pointer, We Will Talk About Pointer Later

  Search For
  - Iterators Type
  - C++ Containers
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
     vector<int> nums = {10, 20, 30, 40};

     vector<int> :: iterator iterate = nums.begin();
     cout << "First Element Is: " << *iterate << endl; // Dont Print The Iterator, Print What Its Point To
     cout << "First Element Is: " << *nums.begin() << endl;
     

     auto iter = nums.begin() + 1; // With Auto Keyword
     cout << "Second Element Is: " << *iter << endl;
     cout << "Second Element Is: " << *(nums.begin()+1) << endl;

     nums.erase(nums.begin(), nums.begin()+2); // End Not Included
     // nums.begin() & nums.begin()+1 only will be deleted
     cout << "First Element After Delete Is: " << *nums.begin() << endl;

     return 0;
}
