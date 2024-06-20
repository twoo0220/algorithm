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

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;
		int max = gcd(a, b);
		std::cout << ((a * b) / max) << "\n";
	}

	return 0;
}
