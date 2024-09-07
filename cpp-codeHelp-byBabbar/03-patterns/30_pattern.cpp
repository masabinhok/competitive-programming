#include <iostream>
using namespace std;

int main () {
  int n ;
  cin >> n;

  //handling negative and 0 case
  if(n<=0){
    cout<<"Please enter a positive number.";
    return EXIT_FAILURE;
  }


//printing rows
  for(int i = 1; i <=n; i++){

    //printing first half with stars
    for(int j =1; j<=n+i-1; j++){
      if(j<=n-i+1){
        cout<<j<<" ";
      }
    if(j>n-i+1){
      cout<<"*"<<" ";
    }
    }
//printing second half
    for(int k = n-i+1; k>=1; k--){
      cout<<k<<" ";
    }

    cout<<endl;
  }
}