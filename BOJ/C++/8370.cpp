#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int n1(0), k1(0), n2(0), k2(0);
	std::cin >> n1 >> k1 >> n2 >> k2;
	std::cout << (n1 * k1) + (n2 * k2);
	return 0;
}
