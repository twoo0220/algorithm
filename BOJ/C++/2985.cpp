#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	double a(0), b(0), c(0);
	std::cin >> a >> b >> c;

	if (a == (b + c))
	{
		std::cout << a << "=" << b << "+" << c;
	}
	else if (a == (b / c))
	{
		std::cout << a << "=" << b << "/" << c;
	}
	else if (a == (b - c))
	{
		std::cout << a << "=" << b << "-" << c;
	}
	else if (a == (b * c))
	{
		std::cout << a << "=" << b << "*" << c;
	}
	else if ((a + b) == c)
	{
		std::cout << a << "+" << b << "=" << c;
	}
	else if ((a - b) == c)
	{
		std::cout << a << "-" << b << "=" << c;
	}
	else if ((a * b) == c)
	{
		std::cout << a << "*" << b << "=" << c;
	}
	else
	{
		std::cout << a << "/" << b << "=" << c;
	}
	return 0;
}
