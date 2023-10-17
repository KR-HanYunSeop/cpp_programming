#include "Class.h"
#include <cmath>

Exp::Exp() {
    base = 1;
}

Exp::Exp(int a) {
    base = a;
    exp = 1;
}

Exp::Exp(int a, int b) {
    base = a;
    exp = b;
}

int Exp::getValue() {
    return pow(base, exp);
}

int Exp::getBase() {
    return base;
}

int Exp::getExp() {
    return exp;
}

bool Exp::equals(Exp b) {
    if (this->getValue() == b.getValue()) {
        return true;
    } else {
        return false;
    }
}
