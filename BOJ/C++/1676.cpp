#include <iostream>

int main()
{
	uint32_t size = 0;
	std::cin >> size;

	uint32_t result = (size / 5) + (size / 25) + (size / 125);
	std::cout << result;

	return 0;
}
