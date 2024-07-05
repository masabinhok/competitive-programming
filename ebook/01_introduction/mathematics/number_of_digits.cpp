#include <bits/stdc++.h>

using namespace std;

//To find the number of digits of a number x in base b, we can use the formula: log(x)/log(b) + 1;


int main () {
  int x, b;
  cout<<"Enter the number x and base b"<<endl;
  cin>>x>>b;
  cout<<"Number of digits in "<<x<<" in base "<<b<<" is "<<(int)(log(x)/log(b) + 1);
}