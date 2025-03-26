#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
    Random();
    int next();
    int nextInRange(int c, int d);
};

Random::Random() {
    srand((unsigned(time(0))));
}

int Random::next() {
    int a = rand();
    return a;
}

int Random::nextInRange(int c, int d) {
    int b = rand() % (d - c + 1) + c;
    return b;
}

int main() {
    Random r;
    srand((unsigned)time(0));
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0;i < 10;i++) {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "--2에서 4까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0;i < 10;i++) {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
    cout << endl;
}