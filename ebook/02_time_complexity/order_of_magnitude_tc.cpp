//order of magnitude

//time complexity le hamilai order of magnitude matra dinxa, tara no of time the code executed inside the loop didainaa....


#include <bits/stdc++.h>
using namespace std;


int main () {
  int n ;
  cin >> n ;

  //yo code 3n times run hunxa
  for(int i =1; i<=3*n; i++){
    printf("Hello World\n");
  }
  //yo code 5n + 1 times run hunxa
  for(int i =1; i<=5*n + 1; i++){
    printf("Hello World\n");
  }

//yo code n/2 times run hunxa
  for(int i =1; i<=n; i+=2){
    printf("Hello World\n");
  }
}


//tara sabai ko time complexity O(n) matra hunxa, order of magnitude matra dekhauxa, no of time the code executed inside the loop didaina...