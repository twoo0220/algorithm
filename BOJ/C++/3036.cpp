#include <iostream>

static int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	int standard = 0;
	std::cin >> standard;

	for (int i = 1; i < count; ++i)
	{
		int circle = 0;
		std::cin >> circle;
		int result = gcd(standard, circle);

		std::cout << (standard / result) << "/" << (circle / result) << "\n";
	}
	return 0;
}
