#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0);
	std::cin >> a >> b >> c;
	std::cout << (a + 1) * (b + 1) / (c + 1) - 1;
	return 0;
}
