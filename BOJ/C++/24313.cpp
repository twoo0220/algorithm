#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a1(0), a0(0), c(0), n0(0);
	std::cin >> a1 >> a0 >> c >> n0;
	
	if ((a1 <= c) && (a1 * n0 + a0 <= c * n0))
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}
	// a1*n + a0 >= c * n
	// a0 / (c - a1) >= n >= n0

	return 0;
}
