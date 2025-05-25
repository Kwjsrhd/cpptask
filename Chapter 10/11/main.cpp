#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
public:
	int year;
	string name;
	string author;
};

int main() {
	vector <Book> v;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	int i = 0;
	while (true) {
		int year=0;
		string name="";
		string author="";
		Book a;
		v.push_back(a);
		cout << "년도>>"; cin >> year;
		if (year == -1) break;
		v.at(i).year = year;
		cout << "책이름>>"; cin >> name;
		v.at(i).name = name;
		cout << "저자>>"; getline(cin,author); // 띄어쓰기 처리해야함
		v.at(i).author = author;
		i++;
	}
	cout << "총 입고된 책은 " << i << "권 입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요 >>";
	string search1;
	cin >> search1;
	for (int k = 0; k < i; k++) {
		if (v.at(k).author == search1) {
			cout << v.at(k).year << "년도, " << v.at(k).name << ", " << v.at(k).author << endl;
		}
	}
	cout << "검색하고자 하는 저자 년도를 입력하세요 >>";
	int search2;
	cin >> search2;
	for (int k = 0; k < i; k++) {
		if (v.at(k).year == search2) {
			cout << v.at(k).year << "년도, " << v.at(k).name << ", " << v.at(k).author << endl;
		}
	}
	
}