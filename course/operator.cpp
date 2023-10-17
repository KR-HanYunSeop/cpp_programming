#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c;

    cout << a + b / 3 * 3 << endl; // 14
    cout << (b << 2) << endl; // -> 10 * 2 * 2 = 40
    cout << (a != b) << endl; // -> True : 1
    cout << (b % a) << endl; // 0
    cout << ((a > b) ? a : b) << endl; // 10
    cout << sizeof(a) << endl; // int = 4byte
    c = a++;
    cout << c << endl; // 후위연산자 a -> c에 대입하고 a를 증가시킴 : 5 / ++a 는 6을 출력
    a += b;
    cout << a << endl; // a는 현재 6이고 + b -> 16
    cout << (a & b) << endl; // 비트단위로 비교 : 2진수로 6은 0110, 10은 1010 두개를 합쳐서 하나라도 0이 있다면 0
    
    // 중요
    c = (a + b, a - b); // 마지막 연산의 결과가 대표값으로 들어감 a + b = 26, a - b = 6
    cout << c << endl;
}