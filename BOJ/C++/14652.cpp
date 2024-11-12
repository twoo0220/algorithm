#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0);
	std::cin >> a >> b >> c;
	std::cout << (c / b) << " " << (c % b);

	return 0;
}
