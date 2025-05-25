#include <iostream>
#include <map>
using namespace std;

int main() {
	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	map<string, double> dic;

	string name;
	int score;
	int num=0;
	
	while (true) {
		cout << "입력:1, 조회:2, 종료:3 >> "; cin >> num;
		if (num == 1) {
			cout << "이름과 점수>> ";
			cin >> name >> score;
			dic.insert(make_pair(name, score));
		}
		else if (num == 2) {
			string search;
			cout << "이름>> ";
			cin >> search;
			cout << search << "의 점수는 " << dic[search] << endl;
		}
		else if (num == 3) {
			cout << "프로그램을 종료합니다..." << endl;
			break;
		}
	}
	
}