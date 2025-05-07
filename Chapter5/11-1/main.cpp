#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const Book& c);
	Book(const char* title, int price) { this->title = new char[strlen(title) + 1]; this->price = price; strcpy(this->title, title); }
	~Book() { delete[] title; }
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

void Book::set(const char* title, int price) {
	if (this->title)
	{
		delete[] this->title;
	}
	this->title = new char[strlen(title) + 1];
	this->price = price;
	strcpy(this->title, title);
}

Book::Book(const Book& c) {
	this->price = c.price;
	this->title = new char[strlen(c.title) + 1];
	strcpy(this->title, c.title);
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}