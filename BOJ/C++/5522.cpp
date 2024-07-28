#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int result = 0;
	for (int i = 0; i < 5; ++i)
	{
		int number = 0;
		std::cin >> number;
		result += number;
	}

	std::cout << result;

	return 0;
}
