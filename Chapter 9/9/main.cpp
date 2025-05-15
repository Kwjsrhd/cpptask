#include <iostream>
using namespace std;

class PRINTER {
protected:
	string model, manufacturer;
	int printedCount, availableCount;
	PRINTER(string model, string manufacturer, int availableCount) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount;
	}
public:
	virtual void show() = 0;
	virtual void print(int pages) = 0;
};

class InkJetPrinter : public PRINTER {
	int availableInk;
public:
	InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) : PRINTER(model, manufacturer, availableCount)
	{ this->availableInk = availableInk; }
	virtual void show() {
		cout << "잉크젯 : " << model << ", " << manufacturer << ", " << "남은 종이 " << availableCount << "장, 남은 잉크 " << availableInk <<endl;
	}
	virtual void print(int pages) {
		printedCount = pages;
		if (printedCount <= availableInk && printedCount <= availableCount) {
			availableInk -= printedCount;
			availableCount -= printedCount; cout << "프린트하였습니다." << endl;
		}
		else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
};

class LaserPrinter : public PRINTER {
	double availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, double availableToner) : PRINTER(model, manufacturer, availableCount)
	{ this->availableToner = availableToner; }
	virtual void show() {
		cout << "레이저 : " << model << ", " << manufacturer << ", " << "남은 종이 " << availableCount << "장, 남은토너 " << availableToner << endl;
	}
	virtual void print(int pages) {
		printedCount = pages;
		if (double(printedCount) <= availableToner && printedCount <= availableCount) {
			availableToner = availableToner - double(printedCount)/2;
			availableCount -= printedCount; cout << "프린트하였습니다." << endl;
		}
		else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
};

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* las = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	ink->show();
	las->show();
	cout << endl;
	
	while (true) {
		int type,pages;
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> type >> pages;
		if (type == 1) { ink->print(pages); }
		else las->print(pages);

		ink->show();
		las->show();
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		char con;
		cin >> con;
		if (con == 'n') break;
		cout << endl;
	}
	delete ink;
	delete las;
}