#include <iostream>
using namespace std;

class Shape {
public:
   virtual double area() { return 0; }
   virtual void draw() {}
};

class Rect : public Shape {
private:
   int width, height;
public:
   Rect(int w=1, int h=1) : width(w), height(h) {}
   void draw() {
      cout << "Rectangular" << endl;
   }
   double area() { return width * height; }
};

class Circle : public Shape {
private:
   int radius;
public:
   Circle(int r = 1) : radius(r) {}
   void draw() {
      cout << "Circle" << endl;
   }
   double area() { return radius * radius * 3.14; }
};

class Line : public Shape {
public:
   void draw() {
      cout << "Line" << endl;
   }
};

class Triangle : public Shape {
private :
   int width, height;
public:
   Triangle(int w = 1, int h = 1) : width(w), height(h) {}
   void draw() {
      cout << "Triangle" << endl;
   }
   double area() { return width * height * 0.5; }
};

class Parallelogram : public Rect {
public:
   Parallelogram(int b = 1, int h = 1) : Rect(b,h) {}
   void draw() {
      cout << "Parallelogram" << endl;
   }
};

void paint(Shape* p) {
   p->draw();
}

void getArea(Shape* p) {
   cout << p->area() << endl;
}

int main() {
   paint(new Circle());
   paint(new Rect());
   paint(new Line());
   paint(new Triangle());
   paint(new Parallelogram());

   getArea(new Circle(10));
   getArea(new Rect(5, 4));
   getArea(new Triangle(5, 4));
   getArea(new Parallelogram(5, 4));
}