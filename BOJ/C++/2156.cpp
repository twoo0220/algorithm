#include <iostream>

unsigned int dp[10001]{};
unsigned int temp[10001]{};

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	unsigned int size = 0;
	std::cin >> size;

	for (int i = 1; i <= size; ++i)
	{
		std::cin >> temp[i];
	}

	dp[1] = temp[1];
	dp[2] = temp[1] + temp[2];

	for (int i = 3; i <= size; ++i)
	{
		dp[i] = std::max(dp[i - 3] + temp[i - 1] + temp[i],
			std::max(dp[i - 2] + temp[i], dp[i - 1]));
	}

	std::cout << dp[size];

	return 0;
}
