#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a[100][100]{};
	int b[100][100]{};
	int result[100][100]{};

	int N(0), M(0), K(0);
	std::cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	std::cin >> M >> K;
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < K; ++j)
		{
			std::cin >> b[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			for (int k = 0; k < M; k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
			std::cout << result[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	return 0;
}
