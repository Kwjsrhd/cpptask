#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class SelectableRandom {
public:
    int next_even();
    int nextInRange_even(int c, int d);
    int next_odd();
    int nextInRange_odd(int e, int f);
    SelectableRandom();
};

SelectableRandom::SelectableRandom() {
    srand((unsigned)time(0));
}

int SelectableRandom::next_even() {
    int a;
    while (1) {
        a = rand();
        if (a % 2 == 0) {
            break;
        }
    }
    return a;
}

int SelectableRandom::next_odd() {
    int a;
    while (1) {
        a = rand();
        if (a % 2 == 1) {
            break;
        }
    }
    return a;
}

int SelectableRandom::nextInRange_even(int c, int d) {
    int b;
    while (1) {
        b = rand() % (d - c + 1) + c;
        if (b % 2 == 0) {
            break;
        }
    }
    return b;
}

int SelectableRandom::nextInRange_odd(int e, int f) {
    int b;
    while (1) {
        b = rand() % (f - e + 1) + e;
        if (b % 2 == 1) {
            break;
        }
    }
    return b;
}

int main() {
    SelectableRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 --" << endl;
    for (int i = 0;i < 10;i++) {
        int n = r.next_even();
        cout << n << ' ';
    }
    cout << endl << endl << "--2에서 9까지의 랜덤 홀수 정수 10개 --" << endl;
    for (int i = 0;i < 10;i++) {
        int n = r.nextInRange_odd(2, 10);
        cout << n << ' ';
    }
    cout << endl;
}