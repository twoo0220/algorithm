#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0);
	std::cin >> a >> b >> c;
	std::cout << a + b - c << "\n";

	if (b == 1000)
	{
		a *= 10000;
	}
	else if (b >= 100)
	{
		a *= 1000;
	}
	else if (b >= 10)
	{
		a *= 100;
	}
	else
	{
		a *= 10;
	}
	std::cout << a + b - c;

	return 0;
}
