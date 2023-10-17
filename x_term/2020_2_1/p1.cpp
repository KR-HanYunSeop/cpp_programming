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
    if (a < b) {
        for (int i = a; i <= b; i++) {
        sum += i;   
        }
    }
    else {
        for (int j = b; j <= a; j--) {
            sum += j;
        }
    }
    cout << a << " 에서" << b << " 까지 더한 결과는 " << sum << "입니다." << endl;
}