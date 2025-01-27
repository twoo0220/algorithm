#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int dp[1001][10]{};
	for (int i = 0; i < 10; ++i)
	{
		dp[1][i] = 1;
	}

	int size(0), result(0);
	std::cin >> size;

	for (int i = 2; i <= size; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (j == 0)
			{
				dp[i][0] = 1;
			}
			else
			{
				dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
			}
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		result = (result + dp[size][i]);
	}

	std::cout << result % 10007;
	return 0;
}
