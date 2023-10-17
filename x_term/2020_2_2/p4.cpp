#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

class Player {
private:
    string name;
    int energy;

public:
    Player(string name) : name(name), energy(100) {
        cout << name << " 캐릭터가 생성되었습니다." << endl;
    }

    string getName() const {
        return name;
    }

    int getEnergy() const {
        return energy;
    }

    void decreaseEnergy(int amount) {
        energy -= amount;
        if (energy < 0) {
            energy = 0;
        }
    }
};

class BattleGround {
public: 
    static int energy;

    static void Attack(Player* player) {
        int damage = rand() % 21;  // 0에서 20 사이의 랜덤한 데미지
        energy -= damage;
        if (energy < 0) {
            energy = 0;
        }
        cout << player->getName() << "가(이) 공격했습니다. (Energy: " << energy << ")" << endl;
    }
};

int BattleGround::energy = 100;


int main() {
    srand((unsigned int)time(0));
    Player a("젠지");
    Player b("담원");
    cout << "몬스터의 에너지는 " << BattleGround::energy << "입니다." << endl;                                                                                          
    float randNum;
    while (true) {
        randNum = (float)rand() / RAND_MAX;
        if(randNum > 0.5) {
            BattleGround::Attack(&b);
            if (BattleGround::energy <= 0) {
                cout << b.getName() << " 승리!" << endl;
                break;
            }
        }
        else {
            BattleGround::Attack(&a);
            if (BattleGround::energy <= 0) {
                cout << a.getName() << " 승리!" << endl;
                break;
            }
        }
        sleep(500);
    }
}


