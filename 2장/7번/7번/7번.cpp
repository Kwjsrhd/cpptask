#include <iostream>

int main()
{
    int a;
    char abc[100];

    while (true)
    {
        std::cout << "�����ϰ������ yes�� �Է��ϼ���";
        std::cin.getline(abc, 100);
        if (strcmp(abc, "yes") == 0)
        {
            std::cout << "�����մϴ�...";
            break;
        }
    }

    return 0;
}