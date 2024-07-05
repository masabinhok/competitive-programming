#include <bits/stdc++.h>
using namespace std;

int main () {
  int a = 0 ;
  int b = 1;
cout<<a<<endl;
cout<<b<<endl;
  for(int  i = 0; i <= 10; i++){
    int c= a+b;
    cout<<c<<endl;
    a = b;
    b =c ;
  }
  return 0;
}