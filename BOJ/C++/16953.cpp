#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int a(0), b(0);
	std::cin >> a >> b;

	int count = 1;
	while (true)
	{
		if (a == b)
		{
			break;
		}

		if (a > b)
		{
			count = -1;
			break;
		}

		if (b % 2 == 0)
		{
			b /= 2;
		}
		else if (b % 10 == 1)
		{
			b--;
			b /= 10;
		}
		else
		{
			count = -1;
			break;
		}

		count++;
	}

	std::cout << count;
	return 0;
}
