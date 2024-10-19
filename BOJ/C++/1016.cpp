#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	long long min(0), max(0), count(0);
	std::cin >> min >> max;
	
	std::vector<bool> squareNoNo(max - min + 1, false);
	count = max - min + 1;

	for (long long i = 2; i * i <= max; ++i)
	{
		long long temp = min / (i * i);
		if (min % (i * i) != 0)
		{
			temp++;
		}

		for (long long j = temp; j * i * i <= max; ++j)
		{
			if (!squareNoNo[j * i * i - min])
			{
				squareNoNo[j * i * i - min] = true;
				count--;
			}
		}
	}

	std::cout << count;
	return 0;
}
