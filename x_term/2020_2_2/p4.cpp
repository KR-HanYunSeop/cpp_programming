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
    cout << "캐릭터가 생성되었습니다." << endl;
}

long BattleGround::getEnergy() {
    return energy;
    cout << "몬스터 에너지는 " << energy << "입니다." << endl;
}

void BattleGround::Attack(BattleGround* bg) {
    cout << " 이(가) 공격했습니다.";
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
            cout << "젠지 ";
            a.Attack(&b);
            if (b.getEnergy() <= 0)
            {
                cout << "젠지 승리!" << endl;
                break;
            }
        }
        else
        {
            cout << "담원 ";
            b.Attack(&a);
            if (a.getEnergy() <= 0)
            {
                cout << "담원 승리!" << endl;
                break;
            }
        }
        sleep(0.5);
    }
}