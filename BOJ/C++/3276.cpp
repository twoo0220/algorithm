#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int row(1), column(1), number(0);
	std::cin >> number;

	while ((row * column) < number)
	{
		if (row > column)
		{
			column++;
		}
		else
		{
			row++;
		}
	}
	std::cout << row << ' ' << column;

	return 0;
}
