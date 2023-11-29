#include <iostream>

using namespace std;

class Animal {
public:
	virtual void speak() {
	}
	
};

class Dog : public Animal {
protected:
	void speak() {
		cout << "Bark" << endl;
	}
};

class Cat : public Animal {
protected:
	void speak() {
		cout << "Mwow" << endl;
	}
};

int main() {
	cout << "20201690 한윤섭" << endl;

	Animal* animal;
	Dog dog;
	Cat cat;

	animal = &dog;
	animal->speak();

	animal = &cat;
	animal->speak();

	return 0;
}