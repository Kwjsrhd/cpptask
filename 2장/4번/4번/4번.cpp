#include <iostream>
int main()
{
    std::cout << "5���� �Ǽ��� �Է��϶�";
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

    std::cout << "���� ū �� = " << z;
    return 0;
}