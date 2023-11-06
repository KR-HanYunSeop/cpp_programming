#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Shape.h"
using namespace std;

int main() {
    srand(time(NULL));
    int genNum = rand() % 10 + 1;
    cout << genNum << endl;
    Shape* pS = new Shape[genNum];
    Shape* pShapeList = &pS[0];
    Shape* pInit = &pS[0];

    for (int i = 0; i < genNum; i++) {
        pS[i].add(&pS[i+1]);
    }
    
    do {
        pInit->paint();
    } while (pInit = pInit->getNext());
}