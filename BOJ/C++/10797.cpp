#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> number;

	int count = 0;
	for (int i = 0; i < 5; ++i)
	{
		int car = 0;
		std::cin >> car;
		if (car == number)
		{
			count++;
		}
	}
	std::cout << count;

	return 0;
}
