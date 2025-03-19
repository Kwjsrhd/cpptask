#include <iostream>

int main()
{
    int a;
    char abc[100];

    while (true)
    {
        std::cout << "종료하고싶으면 yes를 입력하세요";
        std::cin.getline(abc, 100);
        if (strcmp(abc, "yes") == 0)
        {
            std::cout << "종료합니다...";
            break;
        }
    }

    return 0;
}