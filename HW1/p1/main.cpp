#include <iostream>
#include "Class.h"
using namespace std;

int main() {
    cout << "20201690한윤섭" << endl;

    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }

    cout << endl << endl << " -- 2에서" << "4까지의 랜덤 정수 10 개 -- " << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}
