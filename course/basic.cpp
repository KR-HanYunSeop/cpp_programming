#include <iostream>
using namespace std; // cout, cin 등을 사용할 때 namespace를 번거롭게 쓰지 않으려고 명시

int g = 20;

int add(int x, int y);

int main() {
    cout << "숫자를 입력하고 엔터를 치세요.\n";
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    cout << sum << endl;
    return 0;
}

int add(int x, int y) {
    return x + y;
}