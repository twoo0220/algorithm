#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int n(0), m(0), k(0);
	std::cin >> n >> m >> k;

	int result = n / 2 > m ? m : n / 2;
	k -= (n + m) - 3 * result;

	if (k > 0)
	{
		result -= (--k / 3) + 1;
	}

	std::cout << result;

	return 0;
}
