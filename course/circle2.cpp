#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() {
    radius = 1;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}
// 주석과 같은 방법으로 위임 생성자로 코드를 작성할 수 있음
/*
Circle::Circle : Circle(1) {}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}
*/

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "도넛 면적은 " << area << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "피자 면적은 " << area << endl;
}