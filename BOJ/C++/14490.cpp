#include <iostream>

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

	int a(0), b(0);
	char c = 0;
	std::cin >> a >> c >> b;

	int gcdValue = gcd(a, b);
	std::cout << a / gcdValue << c << b / gcdValue;
	return 0;
}
