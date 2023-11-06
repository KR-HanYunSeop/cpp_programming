#include <iostream>

using namespace std;

int main() {
	int x;
	double sum = 0;
	cout << "? ";
	cin >> x;

	double* a = new double[x];
	for (int i = 0; i < x; i++) {
		cout << i + 1 << "��° ���� :";
		cin >> a[i];
		sum += a[i];
	}

	cout << "�� = " << sum << endl;
	cout << "��� = " << sum / x << endl;

	return 0;
}