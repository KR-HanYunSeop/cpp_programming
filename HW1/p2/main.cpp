
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
    public:
    SelectableRandom();
    int next();
    int nextInRange(int a, int b);
    
};


SelectableRandom::SelectableRandom(){
    srand((unsigned)time(0));
}

int SelectableRandom::next(){
    int num = rand();
    if (num % 2 == 0)
    {
        return num;
    }
    else
        return next();
}

int SelectableRandom::nextInRange(int a, int b)
{
    int num2 = rand() %(b-a+1) + a;
      if (num2 % 2 != 0)
    {
        return num2;
    }
    else
        return nextInRange(a, b);
    
}


int main() {   
    cout << "20201690한윤섭" << endl;
    
    SelectableRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개 --" << endl;
    for (int  i = 0; i<10; i ++) {
        int n = r.next();
        cout << n << ' ';
        
    }

    cout << endl << endl << " -- 2에서" << "9까지의 랜덤 홀수 정수 10 개 -- " << endl;
    for(int i =0; i<10; i ++) {
        int n = r.nextInRange(2,9);
        cout << n <<' ';
    }
    cout << endl;
    
}
