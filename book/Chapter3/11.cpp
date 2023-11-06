#ifndef BOX_H
#define BOX_H
class Box {
	int width, height;
	char fill;
public:
	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();
};

#endif
#include <iostream>
#include "Box.h"

using namespace std;

Box::Box(int w, int h) {
  setSize(w, h);
  fill = '*';
}
void Box::setFill(char f) {
  fill = f;
}
void Box::setSize(int w, int h) {
  width = w;
  height = h;
}

void Box::draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << fill;
		}
		cout << endl;
	}
}

#include "Box.h"

int main() {
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();

	return 0;
}