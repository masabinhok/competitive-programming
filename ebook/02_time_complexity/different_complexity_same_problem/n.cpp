#include  <bits/stdc++.h>
using namespace std;


int main () {
  int n ;
  cin>>n;
  int array[n];
  int best = 0, sum = 0;
for (int k = 0; k < n; k++) {
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout << best << "\n";
}