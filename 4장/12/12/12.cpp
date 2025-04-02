#include <iostream>
using namespace std;

class Circle {
    int radius;
    string name;
public:
    Circle() { ; }
    void setCircle(string name, int radius) { this->radius = radius; this->name = name; }
    double getArea() { return 3.14 * radius * radius; }
    string getName() { return name; }
};

class CircleManager {
    Circle* p;
    int size;
public:
    CircleManager(int size) { this->size = size; p = new Circle[size]; }
    ~CircleManager() { delete[] p; }
    Circle* get() { return p; }
    void searchByName();
    void searchByArea();
};

void CircleManager::searchByName() {
    string b;
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> b;
    for (int i = 0;i < size;i++) {
        if (b == p[i].getName()) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
            break;
        }
    }
}

void CircleManager::searchByArea() {
    int ar;
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> ar;
    cout << ar << "보다 큰 원을 검색합니다." << endl;
    for (int i = 0;i < size;i++) {
        if (ar < p[i].getArea()) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
        }
    }
    cout << endl;
}

int main() {
    int a;
    cout << "원의 개수 >> ";
    cin >> a;
    CircleManager circles(a);

    for (int i = 0;i < a;i++) {
        string name;
        int radius;
        cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
        cin >> name >> radius;
        circles.get()[i].setCircle(name, radius);
    }
    circles.searchByName();
    circles.searchByArea();
}
