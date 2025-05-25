#include <iostream>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

int main() {
	cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
	vector<Circle> v;

	string name;
	int radius;
	int num;

	while (true) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> num;
		if (num == 1) {
			cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
			cin >> radius >> name;
			v.push_back(Circle(radius, name));
		}
		else if (num == 2) {
			string del;
			cout << "삭제하고자 하는 원의 이름은 >> ";
			cin >> del;
			vector<Circle>::iterator it;
			it = v.begin();

			for (int i = 0; i <= v.size(); i++) {
				if (it->getName() == del) {
					it = v.erase(it);
				}
				else it++;
			}

		}
		else if (num == 3) {
			for (int i = 0; i < v.size();i++) {
				cout << v.at(i).getName() << endl;
			}
			cout << endl;
		}
		else if (num == 4) {
			cout << endl;
			break;
		}
	}
}