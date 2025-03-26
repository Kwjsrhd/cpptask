#include <iostream>
using namespace std;

class Add {
public:
    int a, b;
    void setValue(int x, int y) { a = x;b = y; };
    int calculate() { return a + b; };
};

class Sub {
public:
    int a, b;
    void setValue(int x, int y) { a = x;b = y; };
    int calculate() { return a - b; };
};

class Mul {
public:
    int a, b;
    void setValue(int x, int y) { a = x;b = y; };
    int calculate() { return a * b; };
};

class Div {
public:
    int a, b;
    void setValue(int x, int y) { a = x;b = y; };
    int calculate() { return a / b; };
};

int main() {
    Add a;
    Sub s;
    Mul m;
    Div d;
    int int1, int2;
    char f;
    while (1) {
        cout << "두 정수와 연산자를 입력하세요 >> ";
        cin >> int1 >> int2 >> f;
        if (f == '+') {
            a.setValue(int1, int2);
            cout << a.calculate() << endl;

        }
        else if (f == '-') {
            s.setValue(int1, int2);
            cout << s.calculate() << endl;

        }
        else if (f == '*') {
            m.setValue(int1, int2);
            cout << m.calculate() << endl;

        }
        else if (f == '/') {
            d.setValue(int1, int2);
            cout << d.calculate() << endl;

        }
        else {
            break;
        }

    }
}