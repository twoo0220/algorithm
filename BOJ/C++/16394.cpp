#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int year = 0;
	std::cin >> year;
	std::cout << (year - 1946);
	return 0;
}
