#include <iostream>
int main()
{
    std::cout << "�� ���� �Է��϶�";
    int a, b;
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << "ū�� = " << a;
    }
    else if (a < b)
    {
        std::cout << "ū�� = " << b;
    }
    else
    {
        std::cout << "�� ���� ����";
    }
    return 0;
}