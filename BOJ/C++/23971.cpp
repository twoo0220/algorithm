#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int h(0), w(0), n(0), m(0);
	std::cin >> h >> w >> n >> m;
	
	int x = (h - 1) / (n + 1) + 1;
	int y = (w - 1) / (m + 1) + 1;
	std::cout << (x * y);
	return 0;
}
