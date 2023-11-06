#include <iostream>

using namespace std;

int main() {
	int first, second, sum = 0;

	cout << "첫 번째 수 : ";
	cin >> first;

	cout << "두 번째 수 : ";
	cin >> second;

	for (int i = first; i < second + 1; i++) {
		sum += i;
	}

	cout << first << "에서 " << second << "까지 더한 결과는 " << sum << "입니다." << endl;

	return 0;
}