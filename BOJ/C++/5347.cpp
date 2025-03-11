#include <iostream>

static long long gcd(long long a, long long b)
{
	long long c = 0;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		long long a(0), b(0);
		std::cin >> a >> b;
		long long gcdValue = gcd(a, b);
		std::cout << a * b / gcdValue << "\n";
	}

	return 0;
}
