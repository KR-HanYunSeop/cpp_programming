#include <iostream>
#include <iomanip>

using namespace std;

ostream& fivestart(ostream& outs) {
   return outs << "*****";
}

ostream& rightarrow(ostream& outs) {
   return outs << "---->";
}

ostream& beep(ostream& outs) {
   return outs << '\a';
}

int main() {
   cout << "벨이 울립니다" << beep << endl;
   cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
   cout << "Visual" << fivestart << "C++" << endl;

   return 0;
}