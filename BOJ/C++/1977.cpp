#include <iostream>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int M(0), N(0);
	std::cin >> M >> N;

	int min = static_cast<int>(std::sqrt(M));
	if (min * min < M)
	{
		min++;
	}

	int max = static_cast<int>(std::sqrt(N));
	if (max * max < N)
	{
		max++;
	}

	int sum = 0;
	for (int i = min; i * i <= N; ++i)
	{
		sum += i * i;
	}

	if (sum != 0)
	{
		std::cout << sum << "\n";
		std::cout << min * min;
	}
	else
	{
		std::cout << -1;
	}
	
	return 0;
}
