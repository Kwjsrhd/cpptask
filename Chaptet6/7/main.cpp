#include <iostream>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0,int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	int n = rand() % 100 + 1;
	return n;
}

char Random::nextAlphabet() {
	int n = rand() % 52;
	char c;
	if (n < 26) {
		c = 'A' + n;
	}
	else c = 'a' + (51 - n);
	return c;
}

double Random::nextDouble() {

	double a = rand() / (double)RAND_MAX;

    return a;
}

int main() {
	Random::seed();

	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0;i < 10;i++) {
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0;i < 10;i++) {
		cout << Random::nextAlphabet() << ' ';
	}
	cout << endl << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0;i < 10;i++) {
		double d = Random::nextDouble();
		if(d!=1)
		cout << d << ' ';
	}
}