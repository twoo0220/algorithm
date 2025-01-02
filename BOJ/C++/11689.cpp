#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

	long long n(0), count(0);
	std::cin >> n;
	count = n;

	for (long long i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			count -= count / i;
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}

	if (n > 1)
	{
		count -= count / n;
	}

	std::cout << count;
    return 0;
}
