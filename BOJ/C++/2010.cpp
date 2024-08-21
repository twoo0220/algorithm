#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), result(1);
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int plug = 0;
		std::cin >> plug;
		result += plug;
	}

	std::cout << (result - count);

	return 0;
}
