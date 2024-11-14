// bitwise operators
#include <iostream>
using namespace std;

int main () {
  int a = 4;
  int b =6 ;
  cout << "And: " <<( a & b) << endl;
  cout<< "Or: " << (a | b )<< endl;
  cout <<"Not: " << (~a) <<endl;
  cout << "XOR: " <<(a^b) << endl;
}

// And: 100 110 : 100 : 4 (with AND for 1 both should be 1)
// Or: 100 110 : 110 : 6 (with OR for 1 either of them should be 1)
// Not: 100 : 0000...011 : for its value, we have to take its two's complement, first 1's complement: 1111...100 then add 1, 1111...101, which is negative of 101 : -5. (with NOT it is opposite, i.e 0->1 1->0)
// XOR: 100 110 : 010 : 2 (with XOR its odd 1 detector, i.e if there is single one its 1) 

