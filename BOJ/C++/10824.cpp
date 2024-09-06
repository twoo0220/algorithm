#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long a(0), b(0), c(0), d(0);
	std::cin >> a >> b >> c >> d;

	long long temp = b;
	while (true)
	{
		a *= 10;
		if (temp / 10 == 0)
		{
			break;
		}

		temp /= 10;
	}

	temp = d;
	while (true)
	{
		c *= 10;
		if (temp / 10 == 0)
		{
			break;
		}

		temp /= 10;
	}
	
	std::cout << (a + b + c + d);
	return 0;
}
