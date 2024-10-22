#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int korean_melon = 0;
	std::cin >> korean_melon;

	int direction[6]{};
	int size[6]{};

	for (int i = 0; i < 6; ++i)
	{
		std::cin >> direction[i] >> size[i];
	}

	int maxArea(0), index(0);
	for (int i = 0; i < 6; i++)
	{
		if (maxArea < size[i] * size[(i + 1) % 6])
		{
			maxArea = size[i] * size[(i + 1) % 6];
			index = i;
		}
	}

	int minArea = size[(index + 3) % 6] * size[(index + 4) % 6];
	std::cout << (maxArea - minArea) * korean_melon;
	return 0;
}
