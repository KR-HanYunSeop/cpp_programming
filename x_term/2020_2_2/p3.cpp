#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    // Push operation using the << operator
    Stack& operator<<(int value) {
        if (top < MAX_SIZE - 1) {
            data[++top] = value;
        }
        return *this;
    }

    // Pop operation using the >> operator
    Stack& operator>>(int& value) {
        if (top >= 0) {
            value = data[top--];
        }
        return *this;
    }

    // Check if the stack is empty using the ! operator
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

    cout << std::endl;

}
