#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), a(0), b(0);
	std::cin >> count >> a >> b;

	int bev = a / 2 + b;
	std::cout << ((bev > count) ? count : bev);

	return 0;
}
