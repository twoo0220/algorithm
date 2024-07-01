#include <iostream>

void pattern(int row, int column, int size)
{
	if ((((row / size) % 3) == 1) && (((column / size) % 3) == 1))
	{
		std::cout << ' ';
	}
	else
	{
		if ((size / 3) == 0)
		{
			std::cout << '*';
		}
		else
		{
			pattern(row, column, (size / 3));
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			pattern(i, j, size);
		}
		std::cout << "\n";
	}

	return 0;
}
