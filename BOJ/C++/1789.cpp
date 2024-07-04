#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long number = 0;
	std::cin >> number;

	long long result = 0;
	while (number > 0)
	{
		result++;
		number -= result;
	}

	if (number < 0)
	{
		result--;
	}

	std::cout << result;
	return 0;
}
