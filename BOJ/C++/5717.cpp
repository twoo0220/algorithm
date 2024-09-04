#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		int M(0), F(0);
		std::cin >> M >> F;

		if (M == 0)
		{
			break;
		}
		std::cout << (M + F) << '\n';
	}

	return 0;
}
