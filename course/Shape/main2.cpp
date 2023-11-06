#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   srand(time(0));
   int genNum = rand() % 10 + 5;
   cout << genNum << endl;

   Shape* pStart = NULL;
   Shape* pLast;

   if (rand() % 2 == 0) {
      pStart = new Rect();
   }
   else {
      pStart = new Circle();
   }

   pLast = pStart;
   for (int i = 1; i < genNum; i++) {
      if(rand() % 2 == 1)
         pLast = pLast->add(new Circle());
      else
         pLast = pLast->add(new Rect());
   }

   Shape* p = pStart;

   do {
      p->paint();
   } while (p = p->getNext());
}