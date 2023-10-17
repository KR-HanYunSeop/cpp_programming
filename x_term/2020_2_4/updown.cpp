#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Person {
private:
    string name;
    int guess;

public:
    Person(string n) : name(n), guess(0) {}

    string getName() const {
        return name;
    }

    int getGuess() const {
        return guess;
    }

    void makeGuess() {
        cout << "input : " << name << ">> ";
        cin >> guess;
    }
};

class UpAndDownGame {
private:
    static int answer;
    static int round;
    static Person player1;
    static Person player2;

public:
    static void run() {
        srand(static_cast<unsigned>(time(0)));
        answer = rand() % 100;
        round = 1;

        cout << "첫번째 플레이어의 이름은 무엇입니까? ";
        string name1;
        cin >> name1;
        player1 = Person(name1);

        cout << "두번째 플레이어의 이름은 무엇입니까? ";
        string name2;
        cin >> name2;
        player2 = Person(name2);

        cout << "\nUp & Down 게임을 시작합니다." << endl;
        cout << "첫번째 플레이어부터 번호를 말해주십시오." << endl;

        while (true) {
            cout << "답은 0과 99 사이에 있습니다." << endl;
            player1.makeGuess();

            if (player1.getGuess() == answer) {
                cout << player1.getName() << "이(가) 정답을 맞혔습니다. 축하합니다!" << endl;
                break;
            } else if (player1.getGuess() > answer) {
                cout << "답은 " << answer << "보다 작습니다." << endl;
            } else {
                cout << "답은 " << answer << "보다 큽니다." << endl;
            }

            cout << "답은 " << player1.getGuess() << "과 " << answer << " 사이에 있습니다." << endl;
            player2.makeGuess();

            if (player2.getGuess() == answer) {
                cout << player2.getName() << "이(가) 정답을 맞혔습니다. 축하합니다!" << endl;
                break;
            } else if (player2.getGuess() > answer) {
                cout << "답은 " << answer << "보다 작습니다." << endl;
            } else {
                cout << "답은 " << answer << "보다 큽니다." << endl;
            }

            cout << "답은 " << player2.getGuess() << "과 " << answer << " 사이에 있습니다." << endl;
            round++;
        }
    }
};

int UpAndDownGame::answer = 0;
int UpAndDownGame::round = 1;
Person UpAndDownGame::player1 = Person("");
Person UpAndDownGame::player2 = Person("");

int main() {
    UpAndDownGame::run();
    return 0;
}
