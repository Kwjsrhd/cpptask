#include <iostream>
#include <cstring>

int main()
{
    char str1[100], str2[100];
    std::cout << "새 암호를 입력하세요";
    std::cin >> str1;
    std::cout << "새 암호를 다시 한 번 입력하세요";
    std::cin >> str2;

    if (std::strcmp(str1, str2) == 0)
    {
        std::cout << "같습니다\n";
    }
    else
    {
        std::cout << "같지 않습니다\n";
    }
    return 0;
}