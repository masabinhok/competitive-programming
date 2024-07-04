#include <bits/stdc++.h>
using namespace std;


int main () {
  int n;
  int M = pow(10,9)+ 7;
  cin >> n;
  long long fact = 1;
  for(int i =2; i<=n; i++){
  fact = (fact*i)%M;
  }
  cout << fact << "\n" ;
}