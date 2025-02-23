#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> number;

	int sum = number * (number + 1) / 2;
	int sumDouble = sum * sum;

	std::cout << sum << '\n';
	std::cout << sumDouble << '\n';
	std::cout << sumDouble << '\n';

	return 0;
}
