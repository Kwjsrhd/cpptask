#include <iostream>

int main()
{
	int num;
	int won = 0;
	std::cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	while (true)
	{
		std::cout << "�ֹ�>> ";
		char coffee[100];
		std::cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0)
		{
			won += num * 2000;
			std::cout << num * 2000 << "�� �Դϴ�. ���ְ� �弼��\n";
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
		{
			won += num * 2300;
			std::cout << num * 2300 << "�� �Դϴ�. ���ְ� �弼��\n";
		}
		else if (strcmp(coffee, "īǪġ��") == 0)
		{
			won += num * 2500;
			std::cout << num * 2500 << "�� �Դϴ�. ���ְ� �弼��\n";
		}

		if(won>=20000)
		{
			std::cout << "���� " << won << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
			break;
		}
	}

	return 0;
}