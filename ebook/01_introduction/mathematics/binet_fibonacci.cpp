

#include <bits/stdc++.h>
using namespace std;
//binets formulaa, to calculate fibonacci series....

int main () {
  for (int i = 0; i <=10; i++){
    int p = (pow((1+sqrt(5)), i) - pow((1 -sqrt(5)), i))/(pow(2,i)*sqrt(5));
    cout<<p<<"\n";
  }
return 0;
}