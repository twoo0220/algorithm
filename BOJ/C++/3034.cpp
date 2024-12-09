#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), width(0), height(0);
	std::cin >> count >> width >> height;

	for (int i = 0; i < count; ++i)
	{
		int size = 0;
		std::cin >> size;

		if ((size <= width) ||
			(size <= height) ||
			(size <= std::sqrt(width * width + height * height)))
		{
			std::cout << "DA\n";
		}
		else
		{
			std::cout << "NE\n";
		}
	}

	return 0;
}