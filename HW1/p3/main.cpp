#include <iostream>
#include "Class.h"
using namespace std;

int main() {
    cout << "20201690한윤섭" << endl;

    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();

    return 0;
}
