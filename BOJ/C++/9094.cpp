#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), result(0);
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int n(0), m(0);
		std::cin >> n >> m;

		result = 0;
		for (int a = 1; a < n - 1; ++a)
		{
			for (int b = a + 1; b < n; ++b)
			{
				if ((a * a + b * b + m) % (a * b) == 0)
				{
					result++;
				}
			}
		}
		std::cout << result << '\n';
	}
	return 0;
}
