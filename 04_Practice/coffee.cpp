#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

    string coffee;
    int num;
    int charge = 0;
    int sum = 0;

    while(sum < 20000) {
        cout << "주문>> ";
        cin >> coffee >> num;
        if (coffee == "에스프레소") {
            charge = 2000;
        }
        else if (coffee == "아메리카노") {
            charge = 2300;
        }
        else if (coffee == "카푸치노") {
            charge = 2500;
        }
        else {
            cout << "다시 주문해주세요.";
        }
        cout << charge * num << "원 입니다. 맛있게 드세요" << endl;
        sum += charge * num;
    };
    cout << "오늘 " << sum <<"원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}