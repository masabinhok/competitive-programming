#include <bits/stdc++.h>
using namespace std;


//several variables : sometimes the time complexity depends on several factors, like the size of the array, the size of the string, the size of the matrix, etc.


int main () {
  int n, m;
  cin>>n>>m;
  for(int i = 0; i <=n; i++){
    for(int j = 0; j<=m; j++){
      cout<<"Hello World"<<i<<" "<<j<<endl;
    }
  }
  return 0;
}


//time complexity of this code is O(n*m) as there are two variables n and m, and two nested loops.
