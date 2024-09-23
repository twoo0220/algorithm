#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size(0);
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int start(0), end(0);
		std::cin >> start >> end;

		int length = end - start;
		int result = static_cast<int>(std::sqrt(length - 1));
		if ((length - (result * result)) <= result)
		{
			std::cout << 2 * result << "\n";
		}
		else
		{
			std::cout << (2 * result) + 1 << "\n";
		}

	}

	return 0;
}
