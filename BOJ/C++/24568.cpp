#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int r(0), s(0);
	std::cin >> r >> s;
	std::cout << ((8 * r) + (s * 3)) - 28;

	return 0;
}
