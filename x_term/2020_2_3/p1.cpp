#include <iostream>
using namespace std;

int main() {
    char ch;
    int spaceCount = 0;

    cout << "아래에 입력하세요." << endl;

    while (cin.get(ch)) {
        if (ch == ' ') {
            spaceCount++;
        } else if (ch == EOF) {
            break;
             cout << "공백이 총 " << spaceCount << "개 입니다." << endl;
        }
    }
    return 0;
}
