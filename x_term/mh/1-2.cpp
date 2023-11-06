#include <iostream>

using namespace std;

class Complex {
	int x, y, z;
public:
	inline Complex() {
		x = 0;
		y = 0;
	}
	inline Complex(int x) {
		x = this->x;
	}
	inline Complex(int x, int y) {
		x = this->x;
		y = this->y;
	}
	inline void Show() {
		cout << "( " << x << y << "i" << " ) " << endl;
	}

};

int main() {
	Complex u(1, -2);
	u.Show();
}