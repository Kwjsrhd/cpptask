#include <iostream>
#include <string>
using namespace std;


int main() {
    while (1) {

        cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
        string s1;

        getline(cin, s1, '\n');
        if (s1 == "exit") {
            break;
        }
        int len = s1.length();
        string s2(len, ' ');

        for (int i = 0;i < len;i++) {
            s2[len - i - 1] = s1[i];
        }
        cout << ">>" << s2 << endl;
    }
}