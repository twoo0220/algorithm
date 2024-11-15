#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		int size = -1;
		std::cin >> size;

		if (size == 0) break;

		int sum = 0;
		for (int i = 1; i <= size; ++i)
		{
			sum += i;
		}
		std::cout << sum << "\n";
	}
	return 0;
}
