#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int32_t size = 0;
	std::cin >> size;

	int32_t pointCount = 2;
	for (int32_t i = 0; i < size; ++i)
	{
		pointCount += pointCount - 1;
	}

	std::cout << (pointCount * pointCount);
	return 0;
}
