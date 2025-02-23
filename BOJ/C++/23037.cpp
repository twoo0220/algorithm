#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int number(0), result(0);
	std::cin >> number;

	while (number != 0)
	{
		int temp = number % 10;
		result += temp * temp * temp * temp * temp;
		number /= 10;
	}

	std::cout << result;
	return 0;
}
