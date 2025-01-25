#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int s(0), a(0);
	std::cin >> s >> a;
	s /= 2;
	a /= 2;

	std::cout << (s > a ? a : s);
	return 0;
}
