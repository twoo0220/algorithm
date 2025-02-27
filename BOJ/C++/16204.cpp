#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int n(0), m(0), k(0);
	std::cin >> n >> m >> k;
	std::cout << (m > k ? k : m) + ((n - m) > (n - k) ? (n - k) : (n - m));
	
	return 0;
}
