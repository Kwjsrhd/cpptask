#include <iostream>
using namespace std;

class Tower {
public:
	int b;
	Tower();
	Tower(int a);
	int getHeight();
};

Tower::Tower() {
	b = 1;
}

Tower::Tower(int a) {
	b = a;
}

int Tower::getHeight() {
	return b;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}