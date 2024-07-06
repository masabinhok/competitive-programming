#include <bits/stdc++.h>

using namespace std;


void g(int n ){
  if(n==1) {
    return ;
  }
  g(n-1);
  g(n-1);
  g(n-1);
  
}

int main ( ){
  int n;
  cin >> n;
  g(n);
  return 0;
  
}

//time complexity of this code is O(3^n) as the function is called 3^n times, and the time complexity of the single call is O(1).
