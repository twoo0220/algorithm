#include <iostream>

long long dp[100]{};
static long long tri(int n)
{
	if (0 == dp[n])
	{
		dp[n] = tri(n - 1) + tri(n - 5);
	}

	return dp[n];
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;

	for (int i = 0; i < size; ++i)
	{
		int count = 0;
		std::cin >> count;
		std::cout << tri(--count) << "\n";
	}

	return 0;
}
