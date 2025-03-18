#include <iostream>
int main()
{
	for (int j = 0;j <= 9;j++)
	{
		for (int i = 1;i <= 10;i++)
		{
			std::cout << i + j * 10 << "\t";
		}
		std::cout << "\n";
	}
	return 0;
}