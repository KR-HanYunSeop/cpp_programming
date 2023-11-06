#include <iostream>

using namespace std;

class Stack {
	int p[10];
	int tos;
public:
	Stack() {
		tos = 0;
	}
	Stack& operator<<(int a) {
		if (tos == 10) {
			return *this;
		}
		p[tos++] = a;
		return *this;
	}
	bool operator!() {
		if (tos == 0)	return true;
		else return false;
	}
	Stack& operator>>(int& b) {
		if (tos == 0) {
			return *this;
		}
		b = p[--tos];
		return *this;
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}