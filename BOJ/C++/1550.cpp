#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> std::hex >> number;
	std::cout << number;

	return 0;
}
