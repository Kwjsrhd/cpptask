#include <iostream>

int main()
{
	char str1[100], str2[100], str3[100];
	std::cout << "이름은?";
	std::cin.getline(str1, 100);
	std::cout << "주소는?";
	std::cin.getline(str2, 100);
	std::cout << "나이는?";
	std::cin.getline(str3, 100);
	
	std::cout << str1 << ", " << str2 << ", " << str3 << "\n";

	return 0;

}