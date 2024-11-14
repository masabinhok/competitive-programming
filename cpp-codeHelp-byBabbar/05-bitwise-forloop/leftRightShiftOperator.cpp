//  Left shift operator : shift every bit to left by said number,  5 << 1 : 000...101 => 000...1010 ;; 5 => 10 multiplied by 2. this is only for small numbers; for large number if we left shift : like : 01000000...000001 :: 10000000....0000010 which is not its double but a new negative number. So doubling can't be generalized.

// Right shift operator: shifts every bit to right by said number 5 >> 1 : 101 :: 010 , its like half of the number.


#include <iostream>
using namespace std;


int main () {
  cout << (17 << 1) << endl;
  cout << (19 << 2) << endl;
  cout << (5>>1) << endl;
  cout << (17 >> 1) << endl;

}