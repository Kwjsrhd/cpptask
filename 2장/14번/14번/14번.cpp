#include <iostream>

int main()
{
	int num;
	int won = 0;
	std::cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	while (true)
	{
		std::cout << "주문>> ";
		char coffee[100];
		std::cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0)
		{
			won += num * 2000;
			std::cout << num * 2000 << "원 입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "아메리카노") == 0)
		{
			won += num * 2300;
			std::cout << num * 2300 << "원 입니다. 맛있게 드세요\n";
		}
		else if (strcmp(coffee, "카푸치노") == 0)
		{
			won += num * 2500;
			std::cout << num * 2500 << "원 입니다. 맛있게 드세요\n";
		}

		if(won>=20000)
		{
			std::cout << "오늘 " << won << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
	}

	return 0;
}