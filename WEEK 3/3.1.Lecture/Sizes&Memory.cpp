/*
  Data Types

  - Ram [R]andom [A]ccess [M]emory
  --- Computer Memory Has Locations

  - Data Sizes
  --- Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  --- Byte => A Group of 8 => Store Single Character
  --- Kilo Byte => 1024 Byte
  --- Mega Byte => 1024 Kilobytes
  --- Giga Byte => 1024 Megabytes
  --- Tera Byte => 1024 Gigabytes

  - Data Types With Size
  --- int => 2 Or 4 Bytes => Will Cover Later Why
  --- float => 4 Bytes [18.5656565656]
  --- double => 8 Bytes [18.5656565656] double more precise / float for performance
  ----Number . Fractional Component
  --- char => 1 Byte => "A" "x" "9"
  --- boolean => 1 Byte => true, false
  - Double vs Float

  - The Story Behind Creating A Variable
  --- Declare A Variable
  --- Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  --- Restrict Type Of Data To The Type We Choosed

  - Declare Variable Without Type
  - See Memory Address &

  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  cout << setprecision(13);
  float numberOne = 10.1234567891;
  cout << numberOne << endl;
  double numberTwo = 10.12345678910;
  cout << numberTwo << endl;
  
  auto var = "Hi!";
  cout << sizeof(var) << "\n";

  int num = 100;
  cout << &num ;

  int kiloBytes, bytes, bits;
  cout << "Enter the number of Kilobytes: ";
  cin >> kiloBytes;
  const int bytes_per_kb = 1024;
  const int bits_per_by = 8;
  bytes = kiloBytes * bytes_per_kb;
  bits = bytes * bits_per_by;
  cout << "Number of Kylobytes is: " << kiloBytes << endl;
  cout << "Number of Bytes is: " << bytes << endl;
  cout << "Number of Bites is: " << bits << endl;

  return 0;
}