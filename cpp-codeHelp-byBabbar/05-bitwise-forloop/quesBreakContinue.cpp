#include <iostream>
using namespace std;

// q1 
// int main () 
// {
//   for (int i = 0; i <=5;  i++){
//     cout << i << " ";
//     i ++;
//   }
// }

//output guess: 0 2 4 

// q2
// int main () 
// {
//   for (int i = 0; i <=5;  i--){
//     cout << i << " ";
//     i ++;
//   }
// }

//output guess: 0 0 0 0 ... infinite loop


//q3 

// int main () {
//   for(int i =0 ; i <=15; i +=2){
//     cout << i << " ";
//     if (i & 1){
//       continue;
//     }
//     i++;
//   }
// }



// output guess: 0 3 5 7 9 11 13 15


// q4

// int main () {
//   for(int i =0; i<5; i++){
//     for(int j = i; j <=5; j++){
//       cout << i << " " << j << endl;
//     }
//   }
// }

// output guess: 0 0-5 ; 1 1-5 ; 2 2-5 ; 3 3-5 ; 4 4-5 ; 



// q5 
int main () {
  for(int i =0; i <5; i++){
    for(int j=i; j <=5; j++){
      if(i+j == 10){
        break;
      }
      cout<< i << " " << j << endl;
    }
  }
}


// output guess: 0 0-5 ; 1 1-5 ; 2 2-5 ; 3 3-5 ; 4 4-5 ;