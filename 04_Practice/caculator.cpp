#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1;
    int num2;
    char opr;
    for (;;) {
        cout << "? ";
        cin >> num1 >> opr >> num2;
        cout << num1 << " " << opr << " " << num2 << " = ";
        switch(opr) {
            case '+': cout << num1 + num2;
            break;
            case '-': cout << num1 - num2;
            break;
            case '*': cout << num1 * num2;
            break;
            case '/': cout << num1 / num2;
            break;
            case '%': cout << num1 % num2;
            break;
            default : cout << "Error";
            break;
        }
        cout << "\n";
    }
    return 0;
}