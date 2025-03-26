#include <iostream>
using namespace std;

class Add {
public:
    int a, b;
    void setValue(int x, int y); 
    int calculate();
};

class Sub {
public:
    int a, b;
    void setValue(int x, int y);
    int calculate();
};

class Mul {
public:
    int a, b;
    void setValue(int x, int y);
    int calculate();
};

class Div {
public:
    int a, b;
    void setValue(int x, int y);
    int calculate();
};

void Add::setValue(int x, int y) {
    a = x;
    b = y;
}

int Add::calculate() {
    return a + b;
}

void Sub::setValue(int x, int y) {
    a = x;
    b = y;
}

int Sub::calculate() {
    return a - b;
}

void Mul::setValue(int x, int y) {
    a = x;
    b = y;
}

int Mul::calculate() {
    return a * b;
}

void Div::setValue(int x, int y) {
    a = x;
    b = y;
}

int Div::calculate() {
    return a / b;
}


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