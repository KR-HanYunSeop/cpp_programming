#include <iostream>
#include "Class.h"

int main() {
    std::cout << "20201690한윤섭" << std::endl;

    Exp a(3, 2);
    Exp b(9);
    Exp c;

    std::cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << std::endl;
    std::cout << "a의 베이스 " << a.getBase() << ", 지수 " << a.getExp() << std::endl;

    if (a.equals(b))
        std::cout << "same" << std::endl;
    else
        std::cout << "not same" << std::endl;

    return 0;
}
