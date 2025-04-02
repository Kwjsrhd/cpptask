#include <iostream>
using namespace std;

class Person {
    string name;
    string tel;
public:
    Person();
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel);
};

Person::Person() {
    name = "namenamename";
    tel = "000-0000-0000";
}

void Person::set(string name, string tel) {
    this->name = name;
    this->tel = tel;
}

int main() {
    cout << "이름과 전화번호를 입력해 주세요" << endl;
    Person person[3];
    for (int i = 0;i < 3;i++) {
        string name;
        string tel;
        cout << "사람 " << i + 1 << ">> ";
        cin >> name >> tel;
        person[i].set(name, tel);
    }
    cout << "모든 사람의 이름은 ";
    for (int i = 0;i < 3;i++) {
        cout << person[i].getName() << " ";
    }
    string a;
    cout << endl << "전화번호 검색합니다. 이름을 입력하세요>>";
    cin >> a;
    for (int i = 0;i < 3;i++) {
        if (a == person[i].getName()) {
            cout << "전화 번호는 " << person[i].getTel() << endl;
        }
    }
}