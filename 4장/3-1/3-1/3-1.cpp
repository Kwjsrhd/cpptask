#include <iostream>
#include <string>
using namespace std;

class string1 {
public:
	int sum = 0;
	int len = 0;
	string s;
	string1();
	void at();
};

string1::string1() {
	cout << "문자열 입력>> ";
	getline(cin, s, '\n');
	len = s.length();
}

void string1::at() {
	for (int i = 0; i < len; i++) {
		if (s.at(i) == 'a') {
			sum += 1;
		}
	}
	cout << "문자 a는 " << sum << "개 있습니다.";
}

int main() {
	string1 text;
	text.at();
}