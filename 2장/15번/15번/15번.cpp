#include <iostream>

int main()
{
	while (true)
	{
		std::cout << "\n? ";
		int a = 0;
		char cal;
		int b = 0;
		std::cin >> a >> cal >> b;
		if (cal == '+')
		{
			std::cout << a << " + " << b << " = " << a + b;
		}
		else if (cal == '-')
		{
			std::cout << a << " - " << b << " = " << a - b;
		}
		else if (cal == '*')
		{
			std::cout << a << " * " << b << " = " << a * b;
		}
		else if (cal == '/')
		{
			std::cout << a << " / " << b << " = " << a / b;
		}
		else if (cal == '%')
		{
			std::cout << a << " % " << b << " = " << a % b;
		}
	}
	
	
	return 0;
}