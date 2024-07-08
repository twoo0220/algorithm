#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	while (true)
	{
		int a(0), b(0);
		std::cin >> a >> b;

		if ((a == 0) && (b == 0))
		{
			break;
		}
		else if (a > b)
		{
			std::cout << "Yes\n";
		}
		else
		{
			std::cout << "No\n";
		}
	}

	return 0;
}
