#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class BattleGround {
private:
    long energy;

public:
    BattleGround() : energy(100) {}

    long getEnergy() {
        return energy;
    }

    void setEnergy(long newValue) {
        energy = newValue;
    }

    void Attack(BattleGround* bg) {
    long damage = 20;
    bg->setEnergy(bg->getEnergy() - damage);
    std::cout << "�����߽��ϴ�.(Energy : " << bg->getEnergy() << ")\n";
    }
};

int main() {
    srand(static_cast<unsigned int>(time(0)));
    BattleGround a;
    BattleGround b;
    float randNum;

    while (true) {
        randNum = static_cast<float>(rand()) / RAND_MAX;

        if (randNum > 0.5) {
            std::cout << "A가 ";
            a.Attack(&b);

            if (b.getEnergy() <= 0) {
                std::cout << "A 승리!" << std::endl;
                break;
            }
        } else {
            std::cout << "B가 ";
            b.Attack(&a);

            if (a.getEnergy() <= 0) {
                std::cout << "B 승리!" << std::endl;
                break;
            }
        }

        sleep(500);
    }
}
