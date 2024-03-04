#include <iostream>

int main()
{
	bool square[100][100]{};
	
	int count(0);
	int result(0);
	std::cin >> count;
	for (int i = 0; i < count; ++i)
	{
		int x(0), y(0);
		std::cin >> x >> y;
		for (int j = y; j < y + 10; ++j)
		{
			for (int k = x; k < x + 10; ++k)
			{
				if (square[j][k] == false)
				{
					square[j][k] = true;
					result++;
				}
			}
		}
	}

	std::cout << result;
	return 0;
}
