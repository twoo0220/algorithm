#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	std::string food;
	std::cin >> food;
	
	int count = 0;
	for (int i = 0; i < size / 2; ++i)
	{
		if (food[i] != food[size - i - 1])
		{
			count++;
		}
	}
	std::cout << count;

	return 0;
}
