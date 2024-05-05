#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	int height(0), width(0), number(0), x(0), y(0);

	for (int i = 0; i < count; ++i)
	{
		std::cin >> height >> width >> number;

		x = (number / height) + 1;
		y = (number % height);

		if (y == 0)
		{
			x--;
			y = height;
		}

		if (x < 10)
		{
			std::cout << y << 0 << x << "\n";
		}
		else
		{
			std::cout << y << x << "\n";
		}
	}

	return 0;
}
