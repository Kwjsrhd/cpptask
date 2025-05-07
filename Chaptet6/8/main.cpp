#include <iostream>
using namespace std;

class Trace {
	static string tag[100], info[100];
	static int count;
public:
	static string s1, s2;
	static void put(string s1, string s2) {
		tag[count] = s1;
		info[count] = s2;
		count++;
	}
	static void print(string s3) {
		cout << "-----"<< s3 << "태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0;i < count;i++) {
			if (tag[i] == s3) {
				cout << s3 << ":" << info[i] << endl;
			}
		}
	}
	static void print() {
		cout <<"----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0;i < count;i++) {
			cout << tag[i] << ":" << info[i] << endl;
		}
	}
};

int Trace::count = 0;
string Trace::tag[100] = { " " };
string Trace::info[100] = { " " };

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램을 시작합니다");
	f();
	Trace::put("main()", "종료");
	Trace::print("f()");
	Trace::print();
}