#include <iostream>

int main()
{
	std::cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	char str1[10000];
	char str2[10000];
	int a = 0;
	int i = 0;
	int m[30] = { 0 };
	std::cin.getline(str1, 10000,';');

	for (i = 0;str1[i] != '\0';i++)
	{
		str2[i] = tolower(str1[i]);

		if (isalpha(str1[i]))
		{
			a += 1;
			m[str2[i]-'a']++;
		}
	}

	str2[i] = '\0';
	
	for (i = 0;i < 26;i++)
	{
		std::cout << (char)('a' + i) << " (" << m[i] << ") : ";
		for (int k = 0;k<m[i];k++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "�� ���ĺ� �� " << a;

	return 0;
}