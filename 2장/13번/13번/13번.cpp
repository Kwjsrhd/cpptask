#include <iostream>

int main()
{
	std::cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	while (true)
	{
		int a;
		int b;
		std::cout << "«��:1, ¥��:2, ������:3, ����:4 >>  ";
		std::cin >> a;
		if (a == 1)
		{
			std::cout << "���κ�?";
			std::cin >> b;
			std::cout << "«�� " << b << "�κ� ���Խ��ϴ�\n";
		}
		else if (a == 2)
		{
			std::cout << "���κ�?";
			std::cin >> b;
			std::cout << "¥�� " << b << "�κ� ���Խ��ϴ�\n";
		}
		else if (a == 3)
		{
			std::cout << "���κ�?";
			std::cin >> b;
			std::cout << "������ " << b << "�κ� ���Խ��ϴ�\n";
		}
		else if (a == 4)
		{
			std::cout << "���� ������ �������ϴ�.\n";
			break;
		}
		else
		{
			std::cout << "�ٽ� �ֹ��ϼ���!\n";
		}
	}


	return 0;
}