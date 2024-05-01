#include <iostream>

int dp[1000]{};

int addDP(int n)
{
	if (dp[n] == 0)
	{
		dp[n] = (addDP(n - 2) + addDP(n - 1)) % 10007;
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

	int count = 0;
	std::cin >> count;
	std::cout << addDP(count);
	return 0;
}
