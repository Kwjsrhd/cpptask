#include <iostream>
using namespace std;

template <class T>
T biggest(T a[], int b) {
	T result = a[0];
	for (int i = 1; i < b; i++) {
		if (a[i] > result) result = a[i];
	}
	return result;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2,2.3,24.23,9,10.3,4.2 };
	cout << "biggest x = " << biggest(x, 5) << endl;
	cout << "biggest d = " << biggest(d, 6) << endl;
}