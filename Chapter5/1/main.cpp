#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void display() { cout << radius << endl; }
};

void swap(Circle& c1, Circle& c2) {
	Circle temp;

	temp = c1;
	c1 = c2;
	c2 = temp;
}

int main() {
	Circle c1(3);
	Circle c2(4);
	c1.display();
	c2.display();

	swap(c1, c2);

	c1.display();
	c2.display();
}