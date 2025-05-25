#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* result = new T [sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		result[i] = a[i];
	}
	int k = 0;
	for (int i = sizea; i < sizeb+sizea; i++) {
		result[i] = b[k];
		k++;
	}
	return result;
	delete[] result;
}

int main() {
	double a[] = { 1,2,3.2,4,5 };
	double b[] = { 20.5,39,49,2 };
	for (int i = 0; i < 9; i++) {
		cout << concat(a, 5, b, 4)[i] << " ";
	}
	cout << endl;
	int c[] = { 1,2,3,4,5 };
	int d[] = { 20,39,49,2 };
	for (int i = 0; i < 9; i++) {
		cout << concat(c, 5, d, 4)[i] << " ";
	}
	cout << endl;
}