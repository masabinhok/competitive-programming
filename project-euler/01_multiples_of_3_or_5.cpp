//sum of n natural numbers is given by n(n+1)/2, vanesi multiplying it by x gives the sum of multiples of x;
#include <iostream>
using  namespace std;

int sum_of_multiples(int x, int limit){
int t = (limit-1)/x;
return x * t * (t + 1) /2;
}

int main () {
  int limit = 1000;
  int sum = sum_of_multiples(3, limit) + sum_of_multiples(5,limit) - sum_of_multiples(15, limit);
  cout<<sum;
  return 0;
}

//time_complexity : O(1) \\ space_complexity:O(1)