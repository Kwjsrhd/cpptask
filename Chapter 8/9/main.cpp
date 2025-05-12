#include <iostream>
using namespace std;

class Seat{
public:
	string name="---";
	int time;
	void change(string name) { this->name = name; }
	void abs(string name) {
		if (this->name != name)
			cout << "이름이 다릅니다" << endl;
		else
			this->name = "---"; }
};

class Schedule : public Seat {
public:
	int seatnumber;
	string inputname;
	Seat seatnum[8];
	void show() { for (int i = 0;i < 8;i++) { cout << seatnum[i].name << "\t"; } cout << endl; }
	void book() { cout << "좌석번호>> "; cin >> seatnumber; cout << "이름입력>> "; cin >> inputname; search().change(inputname); }
	void cancel() { cout << "좌석번호>> "; cin >> seatnumber; cout << "이름입력>> "; cin >> inputname; search().abs(inputname); }
	Seat& search() { for (int i = 1;i < 9;i++) { if (seatnumber == i) return seatnum[i - 1]; }; }
};

class AirlineBook : public Schedule{
public:
	Schedule s07, s12, s17;
	void showtime() {
		if (time == 1) { cout << "07시:    "; s07.show(); }
		else if (time == 2) { cout << "12시:    "; s12.show(); }
		else { cout << "17시:    "; s17.show(); }
	}
};

class console : public AirlineBook {
public:
	console() { exe(); }
	void exe();
};

void console::exe() {
	int input=0;
	cout << "예약:1, 취소:2, 보기:3, 끝내기:4>> "; cin >> input;

	if (input == 1) {
		cout << "07시:1, 12시:2, 17시:3>> "; cin >> time;
		showtime();
		if (time == 1) s07.book();
		else if (time == 2) s12.book();
		else s17.book();
		cout << endl;
		exe();
	}
	else if (input == 2) {
		cout << "07시:1, 12시:2, 17시:3>> "; cin >> time;
		showtime();
		if (time == 1) s07.cancel();
		else if (time == 2) s12.cancel();
		else s17.cancel();
		cout << endl;
		exe();
	}
	else if (input == 3) {
		cout << "07시:    "; s07.show();
		cout << "12시:    "; s12.show();
		cout << "17시:    "; s17.show();
		cout << endl;
		exe();
	}
	else return;
}

int main() {
	cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl << endl;
	console go;
}