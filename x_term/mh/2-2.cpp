#include <iostream>

using namespace std;

char& tolower(char a[], int& cnt, bool& success) {
    int len = 0;
    cnt = 0;

    while (a[len] != NULL) {
        len++;
    }

    for (int i = 0; i < len; i++) {
        if (int(a[i]) >= 65 && int(a[i]) <= 90) {
            a[i] += 32;
            cnt++;
            success = true;
        }
    }

    return *a;
}

int main() {
    char s[] = "MIke";
    bool b = false;
    int num;
    char& loc = tolower(s, num, b);
    if (b == false) {
        cout << "대문자를 발견할 수 없습니다." << endl;
        return 0;
    }
    cout << s << endl;
    cout << num << "개의 문자를 변경하였습니다." << endl;
    loc = 'n';
    cout << s << endl;

    return 0;
}

