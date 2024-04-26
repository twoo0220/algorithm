#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	int chang(100), sang(100);
	for (int i = 0; i < count; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;
		if (a > b)
		{
			sang -= a;
		}
		else if (a < b)
		{
			chang -= b;
		}
	}

	std::cout << chang << "\n" << sang;
	return 0;
}
