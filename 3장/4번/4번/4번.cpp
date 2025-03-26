#include <iostream>
using namespace std;

class CoffeeMachine {
public:
    int a;
    int b;
    int c;
    CoffeeMachine(int coffee, int water, int sugar);
    void show();
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
    a = coffee;
    b = water;
    c = sugar;
}

void CoffeeMachine::show() {
    cout << "커피 머신 상태, 커피:" << a << "  물:" << b << "  설탕:" << c << endl;
}

void CoffeeMachine::drinkEspresso() {
    a = a - 1;
    b = b - 1;
}

void CoffeeMachine::drinkAmericano() {
    a = a - 1;
    b = b - 2;
}

void CoffeeMachine::drinkSugarCoffee() {
    a = a - 1;
    b = b - 2;
    c = c - 1;
}


void CoffeeMachine::fill() {
    a = 10;
    b = 10;
    c = 10;
}

int main() {
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}