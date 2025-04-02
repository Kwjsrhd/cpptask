#include <iostream>
#include <string>
using namespace std;

class Histogram {
    string s1;
    string s2;
    string s;
    char c;
public:
    Histogram(string s) { s1 = s; }
    void put(string s) { s1 = s1 + s; }
    void putc(char c) { s1 = s1 + c; }
    void print();
};

void Histogram::print() {
    cout << s1 << endl << endl;
    int count = 0;
    int alpha[27] = { 0 };
    s2 = s1;
    for (int i = 0; s1[i] != '\0';i++) {
        s2[i] = tolower(s1[i]);

        if (isalpha(s2[i])) {
            count += 1;
            alpha[s2[i] - 'a']++;
        }
    }
    cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl << endl;

    for (int i = 0;i < 26;i++) {
        cout << (char)('a' + i) << " (" << alpha[i] << ") : ";
        for (int k = 0;k < alpha[i];k++) {
            cout << "*";
        }
        cout << endl;
    }

}

int main() {
    Histogram elviHisto("Wise men say, only fools rush in But I can't help, ");
    elviHisto.put("falling in love with you");
    elviHisto.putc('-');
    elviHisto.put("Elvis Presley");
    elviHisto.print();
}