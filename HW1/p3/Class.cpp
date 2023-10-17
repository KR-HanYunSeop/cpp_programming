#include "Class.h"

Integer::Integer(int b) {
    a = b;
}

Integer::Integer(std::string c) {
    a = std::stoi(c);
}

int Integer::get() const {
    return a;
}

void Integer::set(int b) {
    a = b;
}

bool Integer::isEven() const {
    return a % 2 == 0;
}
