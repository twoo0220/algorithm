#include <iostream>

// https://kbhetrr.dev/blog/prime-factorization/ 참고
int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int number = 0;
	std::cin >> number;

	for (int i = 2; i * i <= number; ++i)
	{
		while (number % i == 0)
		{
			std::cout << i << "\n";
			number /= i;
		}
	}

	if (number > 1)
	{
		std::cout << number;
	}

	return 0;
}
