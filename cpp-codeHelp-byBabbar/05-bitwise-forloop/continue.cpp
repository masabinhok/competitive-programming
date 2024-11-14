#include <iostream>
using namespace std;

int main () {
  for (int i = 0 ; i < 5; i ++ ){
    if(i == 3){
      continue;
      cout << "Mero ta vau nai xaina ta yr" <<endl;
    }

  cout << "Hi " << i << endl;
  }
}

//3 is skipped also code below continue is skipped