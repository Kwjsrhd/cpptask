#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
    int a;
    Integer(int i);
    Integer(string s);
    int get();
    void set(int b);
    bool isEven();
};

Integer::Integer(int i) {
    a = i;
}

Integer::Integer(string s) {
    a = stoi(s);
}

int Integer::get() {
    return a;
}

void Integer::set(int b) {
    a = b;
}

bool Integer::isEven() {
    return true;
}

int main() {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}