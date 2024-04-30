#include <iostream>

int dp[11]{};

int addDP(int n)
{
	if (dp[n] == 0)
	{
		dp[n] = addDP(n - 3) + addDP(n - 2) + addDP(n - 1);
	}

	return dp[n];
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;
		std::cout << addDP(number) << "\n";
	}
	return 0;
}
