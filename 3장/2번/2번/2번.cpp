#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Date {
public:
	int e = 0;
	int f = 0;
	int g = 0;
	Date(int a, int b, int c);
	Date(string str);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int a,int b,int c) {
	e = a;
	f = b;
	g = c;
}

Date::Date(string str) {
	stringstream da(str);
	char slash;
	da >> e >> slash >> f >> slash >> g;
}

void Date::show() {
	cout << e << "³â" << f << "¿ù" << g << "ÀÏ" << endl;
}

int Date::getYear() {
	return e;
}

int Date::getMonth() {
	return f;
}

int Date::getDay() {
	return g;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}