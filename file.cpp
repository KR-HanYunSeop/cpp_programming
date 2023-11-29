#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* file = "";
    ifstream fin(file);

    if (!fin) {
        cout << file << "열기 오류\n";
        return 0;
    }
    int count = 0;
    int c;

    while(1) {

    }
}