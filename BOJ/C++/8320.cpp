#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size(0), result(0);
	std::cin >> size;

	for (int i = 1; i <= size; ++i)
	{
		for (int j = i; i * j <= size; ++j)
		{
			++result;
		}
	}

	std::cout << result;
	return 0;
}
