#include <iostream>

using namespace std;

class C {
public:
    C() {
        cout << "생성자 C" << endl;
    }
    
    ~C() {
        cout << "소멸자 C" << endl;
    }
};

class A {
public:
    A() {
        cout << "생성자 A" << endl;
    }
    
    ~A() {
        cout << "소멸자 A" << endl;
    }
};

class B : public A {
public:
    C c;  // 클래스 C의 객체를 B의 멤버로 추가
    
    B() : c() {  // 클래스 C의 생성자를 명시적으로 호출
        cout << "생성자 B" << endl;
    }
    
    ~B() {
        cout << "소멸자 B" << endl;
    }
};

int main() {
    B b;
    return 0;
}
