#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char *title;
    int price;
public:
    Book(const Book& p) {
        this->price = p.price;
        title = new char[strlen(p.title) + 1];
        strcpy(title, p.title);
    }
    Book(const char* title, int price);
    ~Book();
    void set(const char* title, int price);
    void show() {
        cout << title << ' ' << price << "원" << endl;
    }
};

Book::Book(const char* title, int price) {
    int len = strlen(title);
    this->title = new char [len + 1];
    strcpy(this->title, title);
    this->price = price;
}

Book::~Book() {
    if (title)
        delete [] title;
}

void Book::set(const char* title, int price) {
    delete[] this->title;
    this->title = new char[strlen(title)+1];
    strcpy(this->title, title);
    this->price = price;
}

int main() {
    cout << "20201690 한윤섭" << endl;
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
}