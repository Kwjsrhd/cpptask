#include <iostream>

int main()
{
	char str1[100], str2[100], str3[100];
	std::cout << "�̸���?";
	std::cin.getline(str1, 100);
	std::cout << "�ּҴ�?";
	std::cin.getline(str2, 100);
	std::cout << "���̴�?";
	std::cin.getline(str3, 100);
	
	std::cout << str1 << ", " << str2 << ", " << str3 << "\n";

	return 0;

}