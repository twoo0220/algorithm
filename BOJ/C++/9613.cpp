#include <iostream>

static int gcd(int a, int b)
{
	int c = 0;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int number[100]{};
	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int count = 0;
		std::cin >> count;
		for (int j = 0; j < count; ++j)
		{
			std::cin >> number[j];
		}

		long long result = 0;
		for (int j = 0; j < count; ++j)
		{
			for (int k = j + 1; k < count; ++k)
			{
				result += static_cast<long long>(gcd(number[j], number[k]));
			}
		}
		std::cout << result << '\n';
	}

	return 0;
}
