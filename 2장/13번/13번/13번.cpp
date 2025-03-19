#include <iostream>

int main()
{
	std::cout << "***** 승리장에 오신 것을 환영합니다. *****\n";
	while (true)
	{
		int a;
		int b;
		std::cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >>  ";
		std::cin >> a;
		if (a == 1)
		{
			std::cout << "몇인분?";
			std::cin >> b;
			std::cout << "짬뽕 " << b << "인분 나왔습니다\n";
		}
		else if (a == 2)
		{
			std::cout << "몇인분?";
			std::cin >> b;
			std::cout << "짜장 " << b << "인분 나왔습니다\n";
		}
		else if (a == 3)
		{
			std::cout << "몇인분?";
			std::cin >> b;
			std::cout << "군만두 " << b << "인분 나왔습니다\n";
		}
		else if (a == 4)
		{
			std::cout << "오늘 영업은 끝났습니다.\n";
			break;
		}
		else
		{
			std::cout << "다시 주문하세요!\n";
		}
	}


	return 0;
}