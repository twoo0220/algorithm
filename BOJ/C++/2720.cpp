#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	const int change[4] = { 25, 10, 5, 1 };
	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;

		int index = 0;
		while (index < 4)
		{
			std::cout << number / change[index] << " ";
			number %= change[index];
			index++;
		}
		std::cout << "\n";
	}

	return 0;
}
