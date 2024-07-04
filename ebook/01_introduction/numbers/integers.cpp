#include <bits/stdc++.h>

using namespace std;

//int -32 bit typee
//long long -64 bit typeee
//__int128_t - 128 bit typee


int main () {

  int a = 243242523;
  //typecasting, as b is long long and a is int, prodcut of two int would give int and hence b would be storing a wrong dataaa. 
  long long b = (long long)a*a;
  cout<< b << "\n";
}