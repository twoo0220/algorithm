#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int young(0), middle(0);
	std::cin >> young >> middle;
	std::cout << (middle + (middle - young));
	return 0;
}
