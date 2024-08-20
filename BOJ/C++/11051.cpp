#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int n(0), k(0);
	std::cin >> n >> k;

	std::vector<std::vector<int>> vec(n + 1, std::vector<int>(k + 1, 0));

	for (int i = 0; i <= n; ++i)
	{
		vec[i][0] = 1;
	}

	for (int i = 0; i <= k; ++i)
	{
		vec[i][i] = 1;
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			vec[i][j] = (vec[i - 1][j] + vec[i - 1][j - 1]) % 10007;
		}
	}

	std::cout << vec[n][k];

	return 0;
}
