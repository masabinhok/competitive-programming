#include <bits/stdc++.h>

using namespace std;

int main () {

  //takes input from this file
  freopen("input.txt", "r", stdin);
  //stores output to this filee
  freopen("output.txt", "w", stdout);
  
  string s;
  //take inputs till there are no more...
  //getline gets the whole line...
  while(getline(cin,s)){
  cout<<"Hello "<< s << " !" << endl;
  }
  return 0;
}