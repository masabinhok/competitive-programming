#include <iostream>
using namespace std;


int main (){
  int n; 
  cin >> n;

//handling negative input
  if(n<=0){
    cout<<"Please entere a positive integer,"<<endl;
    return EXIT_FAILURE;
  }

  for(int i =1; i <= n; i++ ){
    
//printing spaces
    for(int k = 1; k <= n-i; k ++ ){
      cout<<" ";
    }

//printing numbers
    for(int j = 1; j<=2*i-1; j++){
//first half
      if(j<=i){
        cout<<j;
      }
//second half
      else{
        cout<<(2*i-j);
      }
    }
    cout<<endl;
  }

}