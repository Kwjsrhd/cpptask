#include <iostream>

int main()
{
    std::cout << "문자들을 입력하라(100개 미만).";
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

    std::cout << "x의 개수는 " << a;
    return 0;
}