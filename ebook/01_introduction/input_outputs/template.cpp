// #include is a feature of g++ compiler that allows us to include the entire standard library.. and bits/stdc++.h is a collection of all the libraries such as iostream, vector and algorithm.
#include <bits/stdc++.h>

//it makes the input and output more efficient...
// ios::sync_with_stdio(0);
// cin.tie(0);



// using line declares that the classes and functions of the standard library can be used directly in the code. 
using namespace std;

//we wont have to include std::cout or std::cin. instead it suffices to use cout and cin.

int main () {

  int a,b;
  string x;

  cin>> a>>b>>x;
  cout<<a<<b<<x<<'\n'; // \n is more faster than endl because endl causes a flush operation... 

  //also scanf and printf function are an alternative to c++ standard streams which are faster, but they are also more difficult to useee...
}