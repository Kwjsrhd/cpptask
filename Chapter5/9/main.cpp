#include <iostream>
using namespace std;

class Accunulator {
	int value;
public:
	Accunulator(int value) { this->value = value; }
	Accunulator& add(int n) { value += n; return* this; }
	int get() { return value; }
};

int main() {
	Accunulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}