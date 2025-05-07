#include <iostream>
using namespace std;

class Stack {
    int x[100] = { 0 };
    int i = 0;
public:
    Stack& operator << (int r);
    bool operator !() { if (i == -1) return true; else return false; }
    Stack& operator >> (int& y) { y = x[i]; i -= 1; return*this; }
};

Stack& Stack::operator << (int r) {
    for (i = 0;i < 100;i++) {
        if (x[i] == 0) break;
    }
    x[i] = r;
    return *this;
}

int main() {
    Stack stack;
    stack << 3 << 5 << 10;
    while (true) {
        if (!stack) break;
        int x;
        stack >> x;
        cout << x << ' ';
    }
    cout << endl;
}