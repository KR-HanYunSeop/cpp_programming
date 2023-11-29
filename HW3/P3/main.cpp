#include <iostream>
#include <ctime>

using namespace std;

class Vehicle {
	Vehicle* next;
	int num;
public:
	virtual void getType() {}
	virtual ~Vehicle() {}
	Vehicle* add(Vehicle* p, int num_bar) {
		next = p;
		p->setNum(num_bar);
		return p;
	}
	Vehicle* getNext() {
		return next;
	}
	virtual void setNum(int num_bar) {
		num = num_bar;
	}
};

class Car : public Vehicle {
	int num;
protected:
	void getType() {
		cout << "Car" << endl;
	}
	virtual void setNum(int num_bar) {
		num = num_bar;
	}
public:
	~Car() {
		cout << this->num << " Car 소멸" << endl;
	}
};

class Bike : public Vehicle {
	int num;
protected:
	void getType() {
		cout << "Bike" << endl;
	}
	virtual void setNum(int num_bar) {
		num = num_bar;
	}
public:
	~Bike() {
		cout << this->num << " Bike 소멸" << endl;
	}
};



int main() {
	cout << "20201690 한윤섭" << endl;

	srand(time(0));
	int genNum = rand() % 5 + 6;
	cout << genNum << "개 생성" << endl;

	Vehicle* pStart = NULL;
	Vehicle* pLast;

	if (rand() % 2 == 0) {
		pStart = new Car();
	}
	else {
		pStart = new Bike();
	}

	pLast = pStart;
	int Num_bar = rand() % 9000 + 1000;
	pStart->setNum(Num_bar);

	for (int i = 0; i < genNum; i++) {
		int Num_bar = rand() % 9000 + 1000;
		if (rand() % 2 == 0) {
			pLast = pLast->add(new Car, Num_bar);
		}
		else {
			pLast = pLast->add(new Bike, Num_bar);
		}
	}

	Vehicle* p = pStart;
	while (p != NULL) {
		p->getType();		
		p = p->getNext();
	}

	p = pStart;
	while (p != NULL) {
		Vehicle* q = p->getNext();
		delete p;
		p = q;
	}

	return 0;
}