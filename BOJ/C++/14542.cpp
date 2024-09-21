#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size(0), result(0), index(1);
	while (true)
	{
		std::cin >> size;
		if (size == 0)
		{
			break;
		}

		std::cin >> result;
		for (int i = 1; i < size - 1; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				int temp = 0;
				std::cin >> temp;

				if ((j == 0) || (j == i))
				{
					result += temp;
				}
			}
		}

		if (size != 1)
		{
			for (int i = 0; i < size; ++i)
			{
				int temp = 0;
				std::cin >> temp;
				result += temp;
			}
		}

		std::cout << "Case #" << index << ":" << result << '\n';
		result = 0;
		index++;
	}
	return 0;
}
