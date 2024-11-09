#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<bool> primeVec(10001, true);
	primeVec[0] = false;
	primeVec[1] = false;

	for (int i = 2; i * i <= 10000; ++i)
	{
		if (primeVec[i])
		{
			for (int j = i * i; j <= 10000; j += i)
			{
				primeVec[j] = false;
			}
		}
	}

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;

		for (int i = number / 2; i > 1; --i)
		{
			int index = number - i;
			if (primeVec[i] && primeVec[index])
			{
				std::cout << i << " " << index << "\n";
				break;
			}
		}
	}
	return 0;
}
