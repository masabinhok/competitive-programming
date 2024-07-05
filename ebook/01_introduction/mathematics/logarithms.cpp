#include <bits/stdc++.h>

using namespace std;
//gives number of times we have to divide x by k to get 1;

int main () {
  int x,k;
  cin>>x;
  cin>>k;
  //log base k value (x)
  cout<< log(x)/log(k);
  return 0;
}