#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int a(0), b(0), remain(1);
		std::cin >> a >> b;

		b = !(b % 4) ? 4 : b % 4;

		for (int j = 0; j < b; ++j)
		{
			remain *= a;
		}

		std::cout << (remain % 10 ? remain % 10 : 10) << "\n";
	}

	return 0;
}
