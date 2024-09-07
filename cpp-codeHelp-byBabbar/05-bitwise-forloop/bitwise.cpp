// and & or | not ~ xor ^ 

// bitwise & operator
// both true hunuparxa true return garna laiii.
// 2 & 3
// 10
// 11
// 10 , return 2;

// bitwise | operator
// both false hunuparxa false return garna laiii.
// 2 & 3
// 10
// 11
// 11 , return 3;

// bitwise ~ operator
// inverts bit, 0 ko 1, 1 ko 0
// int ta 32 bit hunxa so, 2 is something like 00000000000000000000000000000010,
// ~ operator will invert, returning 11111111111111111111111111111101


#include <iostream>
using namespace std;


int main () {
  int a = 2;
  int b = ~a;
  cout<<a;
  cout<<b;
  return 0;
}



