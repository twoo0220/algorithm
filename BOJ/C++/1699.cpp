#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	int* dp = new int[100001]{};
	std::cin >> number;

	for (int i = 1; i <= number; ++i)
	{
		dp[i] = i;
		for (int j = 1; j * j <= i; ++j)
		{
			dp[i] = dp[i] < dp[i - j * j] + 1 ? dp[i] : dp[i - j * j] + 1;
		}
	}

	std::cout << dp[number];

	delete[] dp;
	return 0;
}
