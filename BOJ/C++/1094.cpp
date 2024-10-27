#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int stick[7] = { 64, 32, 16, 8, 4, 2, 1 };
	
	int size = 0;
	std::cin >> size;

	int result = 0;
	for (int i = 0; i < 7; ++i)
	{
		if (size >= stick[i])
		{
			result++;
			size -= stick[i];
		}

		if (size == 0)
		{
			break;
		}
	}

	std::cout << result;
	return 0;
}
