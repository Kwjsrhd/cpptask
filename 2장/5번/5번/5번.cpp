#include <iostream>

int main()
{
    std::cout << "���ڵ��� �Է��϶�(100�� �̸�).";
    char abc[100];
    std::cin.getline(abc, 100);

    int a = 0;
    for (int i = 0;i < 100;i++)
    {
        if (abc[i] == 'x')
        {
            a++;
        }
    }

    std::cout << "x�� ������ " << a;
    return 0;
}