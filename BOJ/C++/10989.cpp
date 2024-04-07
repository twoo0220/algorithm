#include <iostream>

int main()
{
	uint32_t size = 0;
	std::cin >> size;

	uint32_t arr[10001]{};

	for (uint32_t i = 0; i < size; ++i)
	{
		uint32_t temp = 0;
		std::cin >> temp;
		arr[temp]++;
	}

	for (uint32_t i = 1; i < 10001; ++i)
	{
		for (uint32_t j = 0; j < arr[i]; ++j)
		{
			std::cout << i << "\n";
		}
	}
	
	return 0;
}
