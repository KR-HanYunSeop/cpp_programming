#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string press;
    string author;
public:
    Book(string title="", string press="", string author="") {
        this->title = title;
        this->press = press;
        this->author = author;
    }
    friend ostream& operator << (ostream& stream, Book b);
};

ostream& operator << (ostream& stream, Book b) {
    stream << b.title << "," << b.press << "," << b.author;
    return stream;  
}
 

int main() {
    Book book("데미안", "열린책들", "헤르만헤세");
    cout << book;
}