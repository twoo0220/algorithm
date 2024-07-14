#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> number;

	if (number % 10 != 0)
	{
		std::cout << -1;
	}
	else
	{
		const int time[3] = { 300, 60, 10 };
		int count[3]{};
		int index = 0;
		while (number > 0)
		{
			while (number >= time[index])
			{
				number -= time[index];
				count[index]++;
			}

			index++;
		}

		for (int i = 0; i < 3; ++i)
		{
			std::cout << count[i] << " ";
		}
	}

	return 0;
}