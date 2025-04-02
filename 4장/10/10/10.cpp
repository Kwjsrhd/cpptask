#include <iostream>
using namespace std;

class Person {
    string name;
public:
    Person() {};
    Person(string name) { this->name = name; }
    string getName() { return name; }
};

class Family {
    Person* p;
    int size;
    string Familyname;
public:
    Family(string name, int size) { p = new Person[size]; Familyname = name; }
    void show();
    void setName(int size, string s);
    ~Family();
};

Family::~Family() {
    delete[]p;
}

void Family::show() {
    cout << Familyname << "가족은 다음과 같이 3명입니다." << endl;
    for (int i = 0;i < 3;i++) {
        cout << p[i].getName() << "    ";
    }
}

void Family::setName(int size, string s) {
    p[size] = Person(s);
}

int main() {
    Family* simpson = new Family("Simpson", 3);
    simpson->setName(0, "Mr Simpson");
    simpson->setName(1, "Mrs Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
}