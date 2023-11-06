#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

class BattleGround {
	long energy;
public:
	BattleGround() {
		setEnergy(100);
		cout << "새로운 캐릭터가 생성되었습니다.(Energy:100)" << endl;
	}
	long getEnergy() {
		return energy;
	}
	void setEnergy(long newValue) {
		energy = newValue;
	}
	void Attack(BattleGround* bg) {
		bg->energy -= 20;
		cout << "공격했습니다.(Energy: " << bg->getEnergy() << ")" << endl;
	}
};


int main() {
	srand((unsigned int)time(0));
	BattleGround a;
	BattleGround b;
	float randNum;

	while (true) {
		randNum = (float)rand() / RAND_MAX;
		if (randNum > 0.5) {
			cout << "A가 ";
			a.Attack(&b);
			if (b.getEnergy() <= 0) {
				cout << "A 승리!" << endl;
				break;
			}
		}
		else {
			cout << "B가 ";
			b.Attack(&a);
			if (a.getEnergy() <= 0) {
				cout << "B승리!" << endl;
				break;
			}
		}
		Sleep(500);
	}


	return 0;
}