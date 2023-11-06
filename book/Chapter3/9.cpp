#include <iostream>
#include <string>

using namespace std;

class Oval {
private:
	int width;
	int height;
public:
	Oval() {
		width = height = 1;
	}
	Oval(int width, int height) {
		this->width = width;
		this->height = height;
	}
	~Oval() {
		cout << "Oval 소멸 : width = " << width << ", height = " << height << endl;
	}
	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
	void set(int width, int height) {
		this->width = width;
		this->height = height;
	}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
};

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;

	return 0;
}