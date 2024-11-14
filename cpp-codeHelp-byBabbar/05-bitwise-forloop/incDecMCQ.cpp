#include <iostream>
using namespace std;

//q1
// int main () {
//   int a, b = 1;
//   a = 10;

//   if(++a) {
//     cout << b;
//   }
//   else 
//   cout << ++b;
// }


//output guess :so a was 10, preInc to 11 which is true, so prints b which is 1.


//q2
// int main () {
//   int a =1;
//   int b=2 ;


//   if(a-- > 0 && ++b > 2){
//     cout <<"Stage1 - Inside If \n";
//   }
//   else {
//     cout << "Stage2 - Inside else \n";
//   }
//   cout << a << " " << b << endl;
// }

// output guess: a is 1, so > 0 true then becomes 0.
// b was 2 , pre increments to 3 and is > 2. true.
// Stage1 - Inside if 
// a: 0 b: 3


//q3
// int main () {
//   int number = 3;
//   cout << (25 * (++number));
// }


//output guess: number was 3 preInc to 4 so ans is 100

//q4
// int main () {
//   int a = 1;
//   int b = a++; 
//   int c = ++a;
//   cout << a << endl; // 3
//   cout << b << endl; //1
//   cout << c; //3
// }

//output guess: a is 1, then b is also 1, then a is 2, and then c is 3 also a is 3.

//q5
int main () {
  int a =1;
  int b=2 ;


  if(a-- > 0 || ++b > 2){
    cout <<"Stage1 - Inside If \n";
  }
  else {
    cout << "Stage2 - Inside else \n";
  }
  cout << a << " " << b << endl;
}


// output guess: a is 1, b is 2, a is postDec so is ofc > 0. 1st condN true, and there comes a or block. Since first condition is true second condition does not get the oppN to execute. So. 
// Stage1 - Inside If and 
// a: 0 but b: 2