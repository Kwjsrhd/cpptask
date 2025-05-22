#include <iostream>
using namespace std;

template <class T>
void reverseArray(T data[], int x) {
	T* tmp = new T[x];
	for (int i = 0; i < x; i++) {
		tmp[i] = data[i];
	}
	int y = x-1;
	for (int i = 0; i < x; i++) {
		data[i] = tmp[y--];
	}
	delete[] tmp;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}