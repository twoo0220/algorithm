#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	// 123456 * 2
	std::vector<bool> primeVec(246913, true);
	primeVec[0] = false;
	primeVec[1] = false;

	for (int i = 2; i * i <= 246912; ++i)
	{
		if (!primeVec[i])
			continue;

		for (int j = i * i; j <= 246912; j += i)
		{
			primeVec[j] = false;
		}
	}

	while (true)
	{
		int size = 0;
		std::cin >> size;

		if (size == 0) break;
		
		int count = 0;
		for (int i = size + 1; i <= (2 * size); ++i)
		{
			if (primeVec[i])
			{
				count++;
			}
		}
		std::cout << count << "\n";
	}

	return 0;
}
