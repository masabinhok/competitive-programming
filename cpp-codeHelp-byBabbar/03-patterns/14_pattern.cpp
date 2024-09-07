#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int value = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            char ch = 'A' + (value - 1); //just for readablitity
            cout << ch << " ";
            value++;
        }
        cout << endl;
    }
    return 0;
}
