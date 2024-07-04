#include <bits/stdc++.h>

using namespace std;

int main () {
//buffer is not flushed after every output operation, resulting in fewer i/o operation and faster execution....
//   for (int i = 0; i < 1000; ++i) {
//     std::cout << "Hello\n";
// }


//buffer is flushed which significantly slow down the execution, tara yesle immediate ouput dinxa re kkkk
for (int i = 0; i < 1000; ++i) {
    std::cout << "Hello" << std::endl;
}
}


