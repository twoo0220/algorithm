#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> number;

	int index = 10;
	int count = 1;
	long long result = 0;
	for (int i = 1; i <= number; ++i)
	{
		if (i >= index)
		{
			index *= 10;
			count++;
		}
		result += count;
	}

	std::cout << result;
	return 0;
}
