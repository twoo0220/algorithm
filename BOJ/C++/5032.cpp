#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int e(0), f(0), c(0);
	std::cin >> e >> f >> c;

	int sum = e + f;
	int result = 0;

	while (sum >= c)
	{
		e = sum / c;
		f = sum % c;
		sum = e + f;

		result += e;
	}

	std::cout << result;
	return 0;
}
