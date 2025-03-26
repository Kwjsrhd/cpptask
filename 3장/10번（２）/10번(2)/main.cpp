#include <iostream>
#include "Calculator.h"
using namespace std;


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