#include <iostream>

static int findGCD(int a, int b)
{
	int c = 0;
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

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;

		int gcd = findGCD(a, b);
		int lcm = a * b / gcd;
		std::cout << lcm << ' ' << gcd << '\n';
	}

    return 0;
}
