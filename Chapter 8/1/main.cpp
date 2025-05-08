#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	int x;
	string s;
public:
	NamedCircle(int x, string s) { this->x = x; this->s = s; }
	void show() { cout << "반지름이 " << x << "인 " << s << endl; }
};

int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show();
}