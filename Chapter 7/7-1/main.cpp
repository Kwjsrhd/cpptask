#include <iostream>
using namespace std;

class Matrix {
    int a, b, c, d;
public:
    Matrix() { a = b = c = d = 0; }
    Matrix(int a1, int b1, int c1, int d1) { a = a1;b = b1;c = c1;d = d1; }
    void show() { cout << "Matrix = {" << a << ' ' << b << ' ' << c << ' ' << d << '}' << endl; }
    Matrix& operator >> (int x[4]) { x[0] = a; x[1] = b; x[2] = c; x[3] = d; return *this; }
    Matrix& operator << (int y[4]) { a = y[0]; b = y[1]; c = y[2]; d = y[3]; return *this; }
};

int main() {
    Matrix a(4, 3, 2, 1), b;
    int x[4], y[4] = { 1,2,3,4 };
    a >> x;
    b << y;

    for (int i = 0; i < 4; i++) cout << x[i] << ' ';
    cout << endl;
    b.show();
}