#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	if ((size % 2) == 0)
	{
		std::cout << "CY";
	}
	else
	{
		std::cout << "SK";
	}

	return 0;
}
