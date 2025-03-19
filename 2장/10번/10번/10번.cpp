#include <iostream>

int main()
{
	char str[100];
	std::cout << "문자열 입력>>";
	std::cin.getline(str, 100);
	int a=0;
	for(int k=0;k<=100;k++)
	{
		if (str[k] == '\0')
		{
			break;
		}
		a = a + 1; 
	}
	
	for (int j = 0;j <= a-1;j++)
	{
		for (int i = 0;i <= j;i++)
		{
			std::cout << str[i];
		}
		std::cout << "\n";
	}

	return 0;
}