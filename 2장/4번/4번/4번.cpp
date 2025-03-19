#include <iostream>
int main()
{
    std::cout << "5개의 실수를 입력하라";
    float a, b, c, d, e, x, y, z;
    std::cin >> a >> b >> c >> d >> e;
    if (a > b)
    {
        x = a;
    }
    else
    {
        x = b;
    }
    if (c > d)
    {
        y = c;
    }
    else
    {
        y = d;
    }
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    if (e > z)
    {
        z = e;
    }

    std::cout << "제일 큰 수 = " << z;
    return 0;
}