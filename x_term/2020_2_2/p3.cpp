#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}
    
    Stack& operator<<(int value) {
        if (top < MAX_SIZE - 1) {
            data[++top] = value;
        }
        return *this;
    }

    Stack& operator>>(int& value) {
        if (top >= 0) {
            value = data[top--];
        }
        return *this;
    }

    operator bool() const {
        return top >= 0;
    }
};

int main() {
    Stack stack;
    stack << 3 << 5 << 10;

    while (true) {
        if (!stack) {
            break;
        }

        int x;
        stack >> x;
        cout << x << ' ';
    }

    cout << endl;

}
