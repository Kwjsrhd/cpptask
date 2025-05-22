#include <iostream>
#include <vector>
using namespace std;

class VECTOR {
	int para;
	vector<int> v;
public:
	void run();
};

void VECTOR::run() {
	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> para;
		if (para == 0) break;
		v.push_back(para);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
		double sum = 0;
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}
		cout << "평균 = " << sum / v.size() << endl;
	}
}

int main() {
	VECTOR v;
	v.run();
}