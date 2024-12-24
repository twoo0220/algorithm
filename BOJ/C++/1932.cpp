#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	int* triangle = new int[501] {};
	int* prevTri = new int[501] {};

	int max = 0;
	for (int i = 1; i <= size; ++i)
	{
		int number = 0;
		std::cin >> number;
		triangle[1] += number;

		for (int j = 2; j <= i; ++j)
		{
			std::cin >> number;
			triangle[j] = prevTri[j - 1] > prevTri[j] ? prevTri[j - 1] + number : prevTri[j] + number;
		}

		for (int j = 1; j <= i; ++j)
		{
			prevTri[j] = triangle[j];
			if (prevTri[j] > max)
			{
				max = prevTri[j];
			}
		}
	}

	std::cout << max;
	delete[] prevTri;
	delete[] triangle;
	return 0;
}