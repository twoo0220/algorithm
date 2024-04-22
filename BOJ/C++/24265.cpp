#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long number = 0;
	std::cin >> number;
	std::cout << ((number - 1) * number / 2) << "\n" << 2;

	return 0;
}
