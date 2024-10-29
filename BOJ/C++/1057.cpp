#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size(0), a(0), b(0);
	std::cin >> size >> a >> b;

	int count = 0;
	while (true)
	{
		a = (a + 1) / 2;
		b = (b + 1) / 2;
		count++;

		if (a == b)
		{
			break;
		}
	}

	std::cout << count;
	return 0;
}
