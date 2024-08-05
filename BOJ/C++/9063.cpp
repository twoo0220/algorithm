#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int maxX(-10001), minX(10001), maxY(-10001), minY(10001), count(0);
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int x(0), y(0);
		std::cin >> x >> y;

		if (x >= maxX)
		{
			maxX = x;
		}

		if (minX >= x)
		{
			minX = x;
		}

		if (y >= maxY)
		{
			maxY = y;
		}

		if (minY >= y)
		{
			minY = y;
		}
	}

	std::cout << (maxX - minX) * (maxY - minY);
	return 0;
}
