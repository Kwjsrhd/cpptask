#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius) {
    this->radius = radius;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    int circle;
    cout << "원의 개수 >> ";
    cin >> circle;
    Circle* parray = new Circle[circle];
    int count = 0;

    for (int i = 0;i < circle;i++) {
        int a = 0;
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> a;
        parray[i].setRadius(a);
        if (parray[i].getArea() > 100) {
            count += 1;
        }
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;

    delete[] parray;
}