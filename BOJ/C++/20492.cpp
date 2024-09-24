#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int money = 0;
	std::cin >> money;
	std::cout << money * 78 / 100 << " " << (money * 8 / 10) + (money * 156 / 1000);

	return 0;
}
