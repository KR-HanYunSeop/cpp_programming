#include <iostream>
using namespace std;

int main() {
    int value = 10;
    int* p = &value;
    cout << "Before : " << " p : " << p << endl;
    int v = (*p)++;
    cout << "v : " << v << " p : " << p << endl;
    cout << "value : " << value << endl;
}