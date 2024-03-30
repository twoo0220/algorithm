#include <iostream>

int main()
{
	uint32_t result = 0;
	for (int i = 0; i < 5; ++i)
	{
		int temp(0);
		std::cin >> temp;
		result += temp * temp;
	}

	std::cout << (result % 10);
	return 0;
}
