#include <bits/stdc++.h>

using namespace std;


int main () {
  string s;
  while(getline(cin, s)){
    
    if(s == "exit")
{
  cout<<"Exiting the inifinte input loop... "<<endl;
  break;
}
cout<<"Received message: "<< s <<endl;
  }
  

  return 0;
}