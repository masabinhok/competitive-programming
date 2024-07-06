//for a recursive function, the time complexity is defined by the number of times the function is called, and the time complexity of the single call..


#include <bits/stdc++.h>

using namespace std;


//recursive function 
void f(int n){
  if(n==1) return ;
  cout<<n<<"\n";
  f(n-1);
}


int main () {
  int n;
  cin >> n;
  f(n);
  return 0;

}

//time complexity of this code is O(n) as the function is called n times, and the time complexity of the single call is O(1).
//thus the total time complexity is O(n*1) = O(n)...