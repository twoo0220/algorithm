#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int ratio[31]{};
	ratio[1] = 1;
	ratio[2] = 1;
	ratio[3] = 1;
	ratio[4] = 2;
	for (int i = 5; i <= 30; ++i)
	{
		ratio[i] = ratio[i - 1] + ratio[i - 2];
	}

	int d(0), k(0);
	std::cin >> d >> k;

	for (int i = 1; i <= k; ++i)
	{
		int remain = k - (ratio[d] * i);
		if ((remain % ratio[d - 1]) == 0)
		{
			if (remain / ratio[d - 1] <= i)
			{
				std::cout << remain / ratio[d - 1] << "\n" << i;
				break;
			}
		}
	}

	return 0;
}
