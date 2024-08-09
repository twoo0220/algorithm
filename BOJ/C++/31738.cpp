#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long a(0), b(0), result(0);
	std::cin >> a >> b;

	if (a < b)
	{
		result = 1;
		for (long long i = a; i > 0; --i)
		{
			result *= i;
			result %= b;
		}
		result %= b;
	}
	std::cout << result;

	return 0;
}
