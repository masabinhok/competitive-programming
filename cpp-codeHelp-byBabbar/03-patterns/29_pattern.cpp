#include <iostream>
using namespace std;

int main (){
  int n; 
  cin>>n;

  if(n<=0){
    cout<<"Please enter a positive integer."<<endl;
    return EXIT_FAILURE;
  }

  //for row printing
  for(int i = 1; i <=n; i++ ){
    //first triangle
    for(int j=1; j<=n-i+1; j++){
    cout<<j<<" ";
    }
   //second triangle
    for(int k=1; k<=2*(i-1); k++){
    cout<<"*"<<" ";
    }

   //third triangle 
    for(int l =n-i+1; l >=1; l--){
    cout<<l<<" ";
    }
    cout<<endl;
  }
}