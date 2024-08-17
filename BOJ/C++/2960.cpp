#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int N(1), K(1), count(0);
	std::cin >> N >> K;

	std::vector<bool> primeVec(N + 1, true);
	primeVec[0] = false;
	primeVec[1] = false;

	for (int i = 2; i <= N; ++i)
	{
		if (primeVec[i])
		{
			for (int j = i; j <= N; j += i)
			{
				if (primeVec[j])
				{
					primeVec[j] = false;
					count++;
					if (count == K)
					{
						std::cout << j;
						return 0;
					}
				}
			}
		}
	}

	return 0;
}
