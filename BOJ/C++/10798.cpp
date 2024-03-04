#include <iostream>

int main()
{
	char arr[15][5] = { 0, };

	for (int i = 0; i < 5; ++i)
	{
		std::string temp;
		std::cin >> temp;
		for (int j = 0; j < temp.size(); ++j)
		{
			arr[j][i] = temp[j];
		}
	}

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if ((arr[i][j] != '\0'))
			{
				std::cout << arr[i][j];
			}
		}
	}
	
	return 0;
}
