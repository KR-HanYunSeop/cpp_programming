#include <iostream>

using namespace std;

class A {
public:
	A() {
		cout << "������ A" << endl;
	}
	~A() {
		cout << "�Ҹ��� A" << endl;
	}
};

class C {
public:
	C() {;
		cout << "������ C" << endl;
	}
	~C() {
		cout << "�Ҹ��� C" << endl;
	}
};

class B {
public:
	B() {
		cout << "������ B" << endl;
	}
	~B() {
		cout << "�Ҹ��� B" << endl;
	}
}; 

C globalC;
A globalA;

int main() {
	B b;

	return 0;
}