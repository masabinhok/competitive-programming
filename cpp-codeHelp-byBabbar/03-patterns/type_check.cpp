#include <iostream>
using namespace std;


int main () {
  char ch;

  cin>> ch;

  if(ch >= 'a' && ch<='z'){
    cout << "Lowercase";
  }

  else if(ch >= 'A' && ch<='Z'){
    cout << "Uppercase";
  }

//check the digit flawlessly 
  else if(ch >= '0' && ch<= '9'){
    cout << "Digit";
  }

  else{
    cout << "Special Character";
  }

}