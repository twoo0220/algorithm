#include <iostream>

int main()
{
	int max = -1;
	int row(0), col(0);
	int arr[9][9]{};

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			int temp(0);
			std::cin >> temp;
			arr[i][j] = temp;

			if (temp > max)
			{
				row = i + 1;
				col = j + 1;
				max = temp;
			}
		}
	}

	std::cout << max << "\n" << row << " " << col;
	return 0;
}
