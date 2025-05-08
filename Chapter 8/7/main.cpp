#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	int i = 0;
	BaseMemory(int size) { mem = new char[size]; }
	BaseMemory(int size, char x[], int i) { this->i = i; mem = new char[size]; for (int k = 0; k < i; k++) { mem[k] = x[k]; } }
	void write1(int tns, char para) { mem[tns] = para; }
public:
	char read(int k = 0) { return mem[k]; }
	void show() { for (int p = 0; p < i; p++) { cout << mem[p]; } }
};

class ROM : public BaseMemory {
	int size;
public:
	ROM(int size, char x[], int i) : BaseMemory(size, x, i) { this->size = size; }
};

class RAM : public BaseMemory {
	int size;
public:
	RAM(int size) : BaseMemory(size) { this->size = size; }
	void write(int k, char s) { write1(k, s); }
};

int main() {
	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++)cout << mainMemory.read(i);
	mainMemory.show();
}