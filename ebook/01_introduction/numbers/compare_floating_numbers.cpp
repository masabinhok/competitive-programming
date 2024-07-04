#include <bits/stdc++.h>
using namespace std;

// a better way to compare floating numbers is to assume that two numbers are equal if their difference is less than E where E is a small number comparable to 10^-9...
int main () {
      double a, b;
      cin >> a >> b;

      if (abs(a-b) <1e-9){
        cout << "They are equalll...."<<endl;
      }
}


