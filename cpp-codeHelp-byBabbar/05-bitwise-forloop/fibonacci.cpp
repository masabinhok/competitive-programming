#include <iostream>
using namespace std;

int main () {

  int n;
  cout << "Enter n: ";
  cin >> n;

  int firstNum = 0;
  int secondNum = 1;
  cout << firstNum << " " << secondNum << " ";

  int nextNum;

  for ( int i = 2; i < n; i++){
      nextNum = firstNum + secondNum;
      firstNum = secondNum;
      secondNum = nextNum;
      cout << secondNum << " "; 
  } 
}