#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	// (n - 2)(n - 1)n / 6
	long long size = 0;
	std::cin >> size;
	std::cout << (size - 2) * (size - 1) * size / 6 << "\n" << 3;
	return 0;
}
