#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int a, b;

	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";

	while (true)
	{
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> a;

		if (a < 0 || a > 4)
		{
			cout << "다시 주문하세요!!\n";
			continue;
		}
		if (a == 4)
		{
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}

		cout << "몇인분?";
		cin >> b;

		switch (a)
		{
		case 1:
			cout << "짬뽕 " << b << "인분 나왔습니다\n";
			break;
		case 2:
			cout << "짜장 " << b << "인분 나왔습니다\n";
			break;
		case 3:
			cout << "군만두 " << b << "인분 나왔습니다\n";
			break;
		default:
			break;
		}
	}

	return 0;
}