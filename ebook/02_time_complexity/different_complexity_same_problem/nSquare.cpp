#include <bits/stdc++.h>
using namespace std;

int main () {
  int best = 0;
  int n;
  cin >> n;
  int array[n];
for (int a = 0; a < n; a++) {
int sum = 0;
for (int b = a; b < n; b++) {
sum += array[b];
best = max(best,sum);
}
}
cout << best << "\n";

}