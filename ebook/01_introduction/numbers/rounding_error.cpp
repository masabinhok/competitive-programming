#include <bits/stdc++.h>

using namespace std;

int main () {
  double x = (0.3 * 3) + 0.1 ; //answer should be one but due to rounding error answer seems to be smth else.
  printf("%.20f\n", x);
}


//point to be noted: it is risky to compare floating point numbers with the == operator, because the values should be equal but are not due to precision errors.



