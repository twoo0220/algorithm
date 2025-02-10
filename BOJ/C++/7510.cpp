#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int a(0), b(0), c(0);
		std::cin >> a >> b >> c;

		a *= a;
		b *= b;
		c *= c;

		std::cout << "Scenario #" << i + 1 << ":" << '\n';
		if ((a + b == c) || (b + c == a) || (a + c == b))
		{
			std::cout << "yes" << '\n' << '\n';
		}
		else
		{
			std::cout << "no" << '\n' << '\n';
		}
	}
	return 0;
}
