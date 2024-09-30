#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(1);
	std::cin >> a >> b;
	std::cout << (b - a) << " " << b;

	return 0;
}
