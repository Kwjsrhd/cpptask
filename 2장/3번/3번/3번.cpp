#include <iostream>
int main()
{
    std::cout << "두 수를 입력하라";
    int a, b;
    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << "큰수 = " << a;
    }
    else if (a < b)
    {
        std::cout << "큰수 = " << b;
    }
    else
    {
        std::cout << "두 수가 같다";
    }
    return 0;
}