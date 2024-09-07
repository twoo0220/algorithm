#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int sum[2]{};
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			int temp = 0;
			std::cin >> temp;
			sum[i] += temp;
		}
	}

	if (sum[0] >= sum[1])
	{
		std::cout << sum[0];
	}
	else
	{
		std::cout << sum[1];
	}
	return 0;
}
