//we are given an array of n numbers, our task is to calculate the maximum subarray sum, the largest possible sum of a sequence of consecutive elements in the array.

#include <bits/stdc++.h>
using namespace std;

int main () {
  int best = 0; //assuming the sum is at least 0 considering an empty subarray

  int n;
  for(int a = 0; a< n ; a++){
    for(int b = a; b < n; b++){
      int sum = 0;
      for(int k = a; k <= b; k++){
        sum += k;
      }
      best = max(best, sum);
    }
  }

}