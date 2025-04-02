#include <iostream>
using namespace std;

class Container {
    int size;
public:
    Container() { size = 10; }
    void fill() { size = 10; }
    void consume() { size -= 1; }
    int getsize() { return size; }
};

class CoffeeVendingMachine {
    Container tong[3];
    void fill() { tong[0].fill(); tong[1].fill(); tong[2].fill(); }
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();
    void show();
public:
    void run();
};

void CoffeeVendingMachine::selectEspresso() {
    if (tong[0].getsize() > 0 && tong[1].getsize() > 0) {
        cout << "에스프레소 드세요" << endl;
        tong[0].consume();
        tong[1].consume();
    }
    else {
        cout << "원료가 부족합니다." << endl;
    }
}

void CoffeeVendingMachine::selectAmericano() {
    if (tong[0].getsize() > 0 && tong[1].getsize() > 1) {
        cout << "아메리카노 드세요" << endl;
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
    }
    else {
        cout << "원료가 부족합니다." << endl;
    }
}

void CoffeeVendingMachine::selectSugarCoffee() {
    if (tong[0].getsize() > 0 && tong[1].getsize() > 1 && tong[2].getsize() > 0) {
        cout << "설탕커피 드세요" << endl;
        tong[0].consume();
        tong[1].consume();
        tong[1].consume();
        tong[2].consume();
    }
    else {
        cout << "원료가 부족합니다." << endl;
    }
}

void CoffeeVendingMachine::show() {
    cout << "커피 " << tong[0].getsize() << ", 물 " << tong[1].getsize() << ", 설탕 " << tong[2].getsize() << endl;
}

void CoffeeVendingMachine::run() {
    cout << "***** 커피 자판기를 작동합니다. *****" << endl;
    int a = 0;
    while (1) {
        cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기 >> ";
        cin >> a;
        if (a == 1) {
            selectEspresso();
        }
        else if (a == 2) {
            selectAmericano();
        }
        else if (a == 3) {
            selectSugarCoffee();
        }
        else if (a == 4) {
            show();
        }
        else if (a == 5) {
            fill();
            show();
        }
        else { break; }
    }
}

int main() {
    CoffeeVendingMachine coffeemachine;
    coffeemachine.run();
}
