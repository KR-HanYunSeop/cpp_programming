#include <iostream>

using namespace std;

int main() {
	int first, second, sum = 0;

	cout << "ù ��° �� : ";
	cin >> first;

	cout << "�� ��° �� : ";
	cin >> second;

	for (int i = first; i < second + 1; i++) {
		sum += i;
	}

	cout << first << "���� " << second << "���� ���� ����� " << sum << "�Դϴ�." << endl;

	return 0;
}