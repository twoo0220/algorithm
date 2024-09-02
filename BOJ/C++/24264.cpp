#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long count = 0;
	std::cin >> count;
	std::cout << count * count << '\n' << 2;

	return 0;
}
