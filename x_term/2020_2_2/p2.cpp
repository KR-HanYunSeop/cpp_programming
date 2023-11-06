#include <iostream>
using namespace std;

char& tolower(char a[], int& cnt, bool& success) {
    cnt = 0;
    success = false;
    
    for (int i = 0; a[i] != '\0'; i++) {
        if (isupper(a[i])) {
            a[i] = tolower(a[i]);
            cnt++;
            success = true;
        }
    }
    
    return a[0];
}

int main() {
    char s[] = "MIke";
    bool b = false;
    int num;
    char& loc = tolower(s, num, b);
    if (b == false) {
        cout << "대문자를 발견할 수 없습니다" << endl;
        return 0;
    }
    cout << s << endl;
    cout << num << "개의 문자를 변경하였습니다" << endl;
    loc = 'n';
    cout << s << endl;
}