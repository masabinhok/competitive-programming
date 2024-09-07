#include <iostream>
using namespace std;


// int main () {
//   int n; 
//   cin >> n ;

//   for(int i = 1 ; i<=n; i++){
//     for(int j = n; j>=1; j--){
//       cout<<j;
//     }
//     cout<<endl;

//   }
// }




//same with while loop

int main () {
  int n ;
  cin >> n ;
  int i = 1; 
  while(i<=n){
    int j = 1; 
    while(j <=n){
      cout << n-j+1;;
      j++;
    }
    cout<<endl;
    i++;
  }
}