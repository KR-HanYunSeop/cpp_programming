#include <iostream>

using namespace std;

class A {
public:
	A() {
		cout << "持失切 A" << endl;
	}
	~A() {
		cout << "社瑚切 A" << endl;
	}
};

class C {
public:
	C() {;
		cout << "持失切 C" << endl;
	}
	~C() {
		cout << "社瑚切 C" << endl;
	}
};

class B {
public:
	B() {
		cout << "持失切 B" << endl;
	}
	~B() {
		cout << "社瑚切 B" << endl;
	}
}; 

C globalC;
A globalA;

int main() {
	B b;

	return 0;
}