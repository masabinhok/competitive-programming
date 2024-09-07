#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for(int k = 0 ; k < i-1; k++){
            cout<<" ";
        }
        for (int j = n; j >= i; j--) {
            cout<<i;
        }
        
        cout << endl;
    }
    return 0;
}
