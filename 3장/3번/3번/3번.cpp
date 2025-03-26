#include <iostream>
using namespace std;

class Account {
public:
    string name;
    int id;
    int balance;
    Account(string name, int id, int balance);
    string getOwner();
    int inquiry();
    int deposit(int add);
    int withdraw(int sub);

};

Account::Account(string n, int a, int b) {
    name = n;
    id = a;
    balance = b;
}

string Account::getOwner() {
    return name;
}

int Account::deposit(int add) {
    return balance = balance + add;
}

int Account::withdraw(int sub) {
    return balance = balance - sub;
}

int Account::inquiry() {
    return balance;
}



int main() {
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
}