#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int sum = 0;
    cout << "첫 번째 수: ";
    cin >> a;
    cout << "두 번째 수: ";
    cin >> b;

    int start = a;
    int end = b;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << start << " 에서 " << end << " 까지 더한 결과는 " << sum << "입니다." << endl;
}
