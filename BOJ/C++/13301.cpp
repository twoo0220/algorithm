#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	long long count = 0;
	std::cin >> count;

	long long width(1), height(1);
	for (long long i = 1; i < count; ++i)
	{
		if (width > height)
		{
			height += width;
		}
		else
		{
			width += height;
		}
	}

	std::cout << (width + height) * 2;
	return 0;
}
