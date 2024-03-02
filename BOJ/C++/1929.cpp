#include <iostream>
#include <vector>

int main()
{
	int m(1), n(1);
	std::cin >> m >> n;

	std::vector<bool> primeVec(n + 1, true);
	primeVec[0] = false;
	primeVec[1] = false;

	for (int i = 2; i*i <= n; ++i)
	{
		if (!primeVec[i])
			continue;

		for (int j = i * i; j <= n; j += i)
		{
			primeVec[j] = false;
		}
	}

	for (int i = m; i < n + 1; ++i)
	{
		if (primeVec[i])
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}
