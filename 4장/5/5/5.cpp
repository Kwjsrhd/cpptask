#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    srand((unsigned)time(0));
    while (1) {

        cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
        int n = rand();
        string s;

        getline(cin, s, '\n');
        if (s == "exit") {
            break;
        }
        int len = s.length();

        while (1) {
            int b = rand() % len;
            if (s[b] != ' ') {
                s[b] = 'a' + n % 26;
                cout << ">>" << s << endl;
                break;
            }

        }
    }
}