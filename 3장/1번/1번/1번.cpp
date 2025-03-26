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
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}