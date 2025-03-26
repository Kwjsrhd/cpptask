#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class EvenRandom {
public:
    int next();
    int nextInRange(int c, int d);
    EvenRandom();
};

EvenRandom::EvenRandom() {
    srand((unsigned)time(0));
}

int EvenRandom::next() {
    int a;
    while (1) {
        a = rand();
        if (a % 2 == 0) {
            break;
        }
    }
    return a;
}

int EvenRandom::nextInRange(int c, int d) {
    int b;
    while (1) {
        b = rand() % (d - c + 1) + c;
        if (b % 2 == 0) {
            break;
        }
    }
    return b;
}

int main() {
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0;i < 10;i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "--2에서 10까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0;i < 10;i++) {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
}