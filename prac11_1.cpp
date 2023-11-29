#include <iostream>
using namespace std;

// int main() {
//     for (int i = 0x21; i < 0x2A; i++) {
//         cout.put(i);
//     }
//     for (int j = 0x3A; j < 0x3C; j++) {
//         cout.put(j);
//     }
//     cout << endl;
// }

int main() {
    char ch = 0x21;
    for (int i = 0; i < 10; i++) {
        cout.put(ch++);
    }
}