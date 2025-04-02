#include <iostream>
#include <string>
using namespace std;

class string1 {
public:
	int len = 0;
	int ind = 0;
	int k = 0;
	char aaa;
	string s;
	string1();
	int leng();
	int find(char aaa, int ind);

};



int string1::find(char aaa, int ind) {
	k = s.find(aaa, ind);
	return k;
}

string1::string1() {
	cout << "문자열 입력>> ";
	getline(cin, s, '\n');
}

int string1::leng() {
	len = s.length();
	return len;
}

int main() {
	int sum = 0;
	string1 text;
	for (int index = 0; index < text.leng();) {
		index += text.find('a', index);
		sum += 1;
	}
	cout << "문자 a는 " << sum << "개 있습니다.";
}