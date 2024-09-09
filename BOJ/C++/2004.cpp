#include <iostream>

static long long two(long long number)
{
	long long count = 0;
	for (long long i = 2; i <= number; i *= 2)
	{
		count += number / i;
	}

	return count;
}

static long long five(long long number)
{
	long long count = 0;
	for (long long i = 5; i <= number; i *= 5)
	{
		count += number / i;
	}

	return count;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long n(0), m(0);
	std::cin >> n >> m;

	long long n5 = five(n) - five(n - m) - five(m);
	long long n2 = two(n) - two(n - m) - two(m);

	std::cout << (n2 > n5 ? n5 : n2);

	return 0;
}
