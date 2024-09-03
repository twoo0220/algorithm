#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), r(0), e(0), c(0);
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cin >> r >> e >> c;
		int result = e - r - c;
		if (result > 0)
		{
			std::cout << "advertise\n";
		}
		else if (result == 0)
		{
			std::cout << "does not matter\n";
		}
		else
		{
			std::cout << "do not advertise\n";
		}
	}

	return 0;
}
