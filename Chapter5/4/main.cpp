#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a > b) {
		big = a;
		return false;
	}
	else if (a < b) {
		big = b;
		return false;
	}
	else {
		big = b;
		return true;
	}
}

int main() {
	int a, b, big= 0;
	cin >> a >> b;
	bigger(a, b, big);
	cout << big;
	cout << bigger(a, b, big);
}