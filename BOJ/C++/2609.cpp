#include <iostream>

int gcd(int a, int b)
{
	int c = 0;
	while (b)
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

	int a(0), b(0), c(0);
	std::cin >> a >> b;

	int max = gcd(a, b);
	std::cout << max << "\n";
	std::cout << ((a * b) / max);

	return 0;
}
