#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Person {
    string name;
public:
    void getname() { cin >> name; }
    string printname() { return name; }
};

class GamblingGame {
    Person p[2];
    int n;
public:
    void start();
    void run();
};

void GamblingGame::start() {
    cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
    cout << "첫번째 선수 이름>>";
    p[0].getname();
    cout << "두번째 선수 이름>>";
    p[1].getname();
    cin.get();
}

void GamblingGame::run() {
    char key;
    int a, b, c;
    while (1) {
        for (int i = 0;i < 2;i++) {
            cout << p[i].printname() << ":<Enter>" << endl;
            cin.get();

            a = rand() % 3;
            b = rand() % 3;
            c = rand() % 3;
            cout << "          " << a << "  " << b << "  " << c << "     ";
            if (a == b && b == c) {
                cout << p[i].printname() << "님 승리!!";
                return;
            }
            else {
                cout << "아쉽군요!" << endl;
            }

        }
    }
}

int main() {
    GamblingGame game;
    srand((unsigned(time(0))));
    game.start();
    game.run();
}