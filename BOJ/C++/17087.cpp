#include <iostream>
#include <math.h>

static int gcd(int a, int b)
{
	int temp = a;

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int n(0), x(0);
	std::cin >> n >> x;

	int result = 0;
	std::cin >> result;
	result = std::abs(result - x);

	for (int i = 1; i < n; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		temp = std::abs(temp - x);
		result = gcd(result, temp);
	}

	std::cout << result;
	return 0;
}
