#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main()
{
    char name[100];
    char abc[100];
    int a = 0;
    for (int i = 1;i <= 5;i++)
    {
        std::cin.getline(name, 100, ';');
        std::cout << i << ":" << name << "\n";

        if (a < strlen(name))
        {
            a = strlen(name);
            strcpy(abc, name);
        }
    }
    std::cout << "가장 긴 이름은" << abc << "\n";
    return 0;
}
