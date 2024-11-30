#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int N(0), L(0);
	std::cin >> N >> L;

	for (int i = L; i <= 100; ++i)
	{
		int size = N - i * (i + 1) / 2;
		if ((size % i) == 0)
		{
			int startNumber = size / i + 1;

			if (startNumber >= 0)
			{
				for (int j = 0; j < i; ++j)
				{
					std::cout << (startNumber + j) << " ";
				}
				goto out;
			}
		}
	}
	std::cout << -1;
out:
	return 0;
}
