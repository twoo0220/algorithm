#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0), c(0), d(0);
	std::cin >> a >> b >> c >> d;

	if ((a + d) > (b + c))
	{
		std::cout << (b + c);
	}
	else
	{
		std::cout << (a + d);
	}

	return 0;
}
