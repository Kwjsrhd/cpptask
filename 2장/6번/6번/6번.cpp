#include <iostream>
#include <cstring>

int main()
{
    char str1[100], str2[100];
    std::cout << "�� ��ȣ�� �Է��ϼ���";
    std::cin >> str1;
    std::cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���";
    std::cin >> str2;

    if (std::strcmp(str1, str2) == 0)
    {
        std::cout << "�����ϴ�\n";
    }
    else
    {
        std::cout << "���� �ʽ��ϴ�\n";
    }
    return 0;
}