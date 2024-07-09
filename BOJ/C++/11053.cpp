#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int dp[1001]{};
	int arr[1001]{};
	int count(0), result(1);
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> arr[i];
	}

	dp[0] = 1;
	for (int i = 1; i < count; ++i)
	{
		dp[i] = 1;
		for (int j = i - 1; j >= 0; --j)
		{
			if (arr[i] > arr[j])
			{
				if (dp[i] < dp[j] + 1)
				{
					dp[i] = dp[j] + 1;
				}
			}
		}

		if (dp[i] > result)
		{
			result = dp[i];
		}
	}

	std::cout << result;
	return 0;
}
