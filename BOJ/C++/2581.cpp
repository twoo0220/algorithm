#include <iostream>
#include <vector>

int main()
{
	int min(0), max(0);
	std::cin >> min >> max;
	
	std::vector<bool> primeVec(max + 1, true);
	primeVec[0] = false;
	primeVec[1] = false;

	for (int i = 2; i * i <= max; ++i)
	{
		if (primeVec[i] == true)
		{
			for (int j = i * i; j <= max; j += i)
			{
				primeVec[j] = false;
			}
		}
	}

	int sum(0);
	int minimum(0);
	for (int i = min; i < max + 1; ++i)
	{
		if (true == primeVec[i])
		{
			if (sum == 0)
			{
				minimum = i;
			}
			
			sum += i;
		}
	}

	if (0 != sum)
	{
		std::cout << sum << "\n" << minimum;
	}
	else
	{
		std::cout << -1;
	}

	return 0;
}
