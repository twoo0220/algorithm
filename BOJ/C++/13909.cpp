#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	int count = 0;
	for (int i = 1; i * i <= size; ++i)
	{
		count++;
	}

	std::cout << count;
	return 0;
}
