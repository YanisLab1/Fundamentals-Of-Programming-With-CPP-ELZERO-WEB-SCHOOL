#include <iostream> 
#include <string>

using namespace std;

int adjustTestTube(int initialNumber)
{
     string strNumber = to_string(initialNumber);

     while (initialNumber % 3 == 0)
     {
          initialNumber--;
          return initialNumber;
     }

      if (initialNumber % 3 != 0)
     {
          for (int i = 0; i < size(strNumber); i++)
          {
               if(strNumber[i] == 3)
               {
                    initialNumber--;
                    return initialNumber;
               }

               else 
               {
                    return initialNumber;
               }
          }
     }
     return initialNumber;
}

int main()
{
     cout << adjustTestTube(13);
}