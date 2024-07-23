#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int odd = 1;
	int result = 0;
	for (int i = 1; i < 9; ++i)
	{
		for (int j = 1; j < 9; ++j)
		{
			char temp{};
			std::cin >> temp;

			if ((temp == 'F') && (j % 2 == odd))
			{
				result++;
			}

		}
		odd = (i + 1) % 2;
	}

	std::cout << result;
	return 0;
}
