#include <iostream>

static int binomial(int a, int b)
{
	if ((b == 0) || (a == b))
	{
		return 1;
	}

	return binomial(a - 1, b - 1) + binomial(a - 1, b);
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0);
	std::cin >> a >> b;

	std::cout << binomial(a, b);

	return 0;
}
