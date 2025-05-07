#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* con = new int[size];
	for (int i = 0;i < size / 2;i++)  con[i] = s1[i];
	for (int i = 0;i < size / 2;i++)  con[i + size / 2] = s2[i];
	return con;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int count = 0;
	int index = 0;
	int* temp = new int[size];
	for (int i = 0;i < 5;i++) {
		bool find = false;
		for (int j = 0;j < 5;j++) {
			if (s1[i] == s2[j]) {
				count++;
				find = true;
				break;
			}
		}
		if (find == false) {
			temp[index] = s1[i];
			index++;
		}
	}
	retSize = size - count;
	int* con = new int[retSize];
	for (int i = 0;i < retSize;i++) {
		con[i] = temp[i];
	}

	return con;
}

int main() {
	int x[5];
	int y[5];
	cout << "정수 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0;i < 5;i++) {
		cin >> x[i];
	}
	cout << "정수 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0;i < 5;i++) { 
		cin >> y[i];
	}

	int* res=ArrayUtility2::concat(x, y, 10);
	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0;i < 10;i++) {
		cout << res[i] << ' ';
	}
	cout << endl;
	
	int retSize;
	int* res2 = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다." << endl;
	for (int i = 0;i < retSize;i++) {
		cout << res2[i] << ' ';
	}	
}