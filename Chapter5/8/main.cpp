#include <iostream>
using namespace std;

class MyInstack {
	int* p;
	int size;
	int tos;
public:
	MyInstack();
	MyInstack(int size) { this->size = size;this-> p = new int[size]; }
	MyInstack(const MyInstack& s);
	~MyInstack() { delete[]p; }
	bool push(int n);
	bool pop(int& n);
};

MyInstack::MyInstack() {
	tos = 0;
}

MyInstack::MyInstack(const MyInstack& s) {
	this->size = s.size; this->p = new int[s.size];this->tos = s.tos; for (int i = 0;i <= tos;i++) { p[i] = s.p[i]; }
};

bool MyInstack::push(int n) {
	if (tos < 10) {
		p[tos] = n;
		tos += 1;
		return true;
	}
	return false;
}

bool MyInstack::pop(int& n) {
	if (tos > 0) {
		tos -= 1;
		n = p[tos];
		return true;
	}
	return false;
}


int main() {
	MyInstack a(10);
	a.push(10);
	a.push(20);
	MyInstack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}