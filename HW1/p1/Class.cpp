#include "Class.h"
#include <cstdlib>
#include <ctime>

Random::Random() {
    srand((unsigned)time(0));
}

int Random::next() {
    return rand();
}

int Random::nextInRange(int a, int b) {
    return rand() % (b - a + 1) + a;
}
