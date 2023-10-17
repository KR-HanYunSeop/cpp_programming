#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

class BattleGround
{
    long energy;

public:
    BattleGround();
    long getEnergy();
    void setEnergy(long newValue);
    void Attack(BattleGround* bg);
};

BattleGround::BattleGround() {
    this->energy = 100;
    cout << "새로운 캐릭터가 생성되었습니다.(Energy: " << energy << " )" << endl;
}

long BattleGround::getEnergy() {
    return energy;
}

void BattleGround::Attack(BattleGround* bg) {
    cout << "공격했습니다.";
    bg->energy = bg->energy - 20;
    cout << "(Energy: " << bg->getEnergy() << ")" << endl;
}

void BattleGround::setEnergy(long newValue){
    cout << "";
}


int main()
{
    srand((unsigned int)time(0));
    BattleGround a;
    BattleGround b;
    float randNum;
    while (true)
    {
        randNum = (float)rand() / RAND_MAX;
        if (randNum > 0.5)
        {
            cout << "A가 ";
            a.Attack(&b);
            if (b.getEnergy() <= 0)
            {
                cout << "A 승리!" << endl;
                break;
            }
        }
        else
        {
            cout << "B가 ";
            b.Attack(&a);
            if (a.getEnergy() <= 0)
            {
                cout << "B 승리!" << endl;
                break;
            }
        }
        sleep(0.5);
    }
}