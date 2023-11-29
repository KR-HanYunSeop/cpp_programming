#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	cout << "2020160 한윤섭" << endl;

	srand(time(0));
	int genNum = rand() % 5 + 5;
	cout << genNum << "개 도형 생성" << endl;

	Shape* pStart = NULL;
	Shape* pLast;

	if (rand() % 3 == 0) {
		pStart = new Rect();
	}
	else if(rand() % 3 == 1) {
		pStart = new Circle();
	}
	else {
		pStart = new Line();
	}


	pLast = pStart;
	for (int i = 0; i < genNum; i++) {
		if (rand() % 3 == 0) {
			pLast = pLast->add(new Circle());
		}
		else if (rand() % 3 == 1) {
			pLast = pLast->add(new Rect());
		}
		else {
			pLast = pLast->add(new Line());
		}
	}

	int cnt = 0;
	Shape* p = pStart;

	p->getNext();
	while (p = p->getNext()) {
		cout << cnt << "번째 도형 : ";
		p->paint();
		cnt++;
	}
}