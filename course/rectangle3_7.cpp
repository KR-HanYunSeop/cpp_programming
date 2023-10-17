#include <iostream>
using namespace std;

class Rectangle {
public:
    int x;
    int y;
    bool isSquare();
    Rectangle();
    Rectangle(int a);
    Rectangle(int w, int h);
    ~Rectangle();
};

bool Rectangle::isSquare() {
    if (x == y) 
        return true;
    else
        return false;
}
Rectangle::~Rectangle() {
    cout << "가로 " << x << "사각형 소멸 호출" << endl;
}

Rectangle::Rectangle() : Rectangle(10) {
    cout << "가로 " << x << "사각형 생성" << endl;
}

Rectangle::Rectangle(int a) : Rectangle(a, a) {}

Rectangle::Rectangle(int w, int h) : x(w), y(h) { cout << "가로 " << x << "사격형 생성" << endl; }

int main() {
    Rectangle rect1;
    Rectangle rect2(4, 5);
    Rectangle rect3(3);
}