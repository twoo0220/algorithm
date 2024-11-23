#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		int number = 0;
		std::cin >> number;

		if (number == 0) break;

		int width(2), count(0);
		while (number != 0)
		{
			count++;
			int temp = number % 10;
			if (temp == 0)
			{
				width += 4;
			}
			else if (temp == 1)
			{
				width += 2;
			}
			else
			{
				width += 3;
			}

			number /= 10;
		}

		width += (count - 1);
		std::cout << width << "\n";
	}
	return 0;
}
