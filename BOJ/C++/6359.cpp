#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int size = 0;
		std::cin >> size;

		int index = 1;
		while (true)
		{
			if (index * index > size)
			{
				std::cout << index - 1 << "\n";
				break;
			}
			index++;
		}
	}
	return 0;
}
