#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int dp[1004]{};
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 0;

	int size = 0;
	std::cin >> size;

	for (int i = 4; i <= size; ++i)
	{
		if (dp[i - 1] == 0 || dp[i - 3] == 0)
		{
			dp[i] = 1;
		}
		else
		{
			dp[i] = 0;
		}
	}

	if (dp[size] == 1)
	{
		std::cout << "SK";
	}
	else
	{
		std::cout << "CY";
	}

	return 0;
}
