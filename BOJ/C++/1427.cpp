#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<uint32_t> vec;
	uint32_t temp = 0;
	std::cin >> temp;
	while (temp)
	{
		vec.push_back(temp % 10);
		temp /= 10;
	}

	std::sort(vec.rbegin(), vec.rend());

	for (uint32_t i = 0; i < vec.size(); ++i)
	{
		std::cout << vec[i];
	}

	return 0;
}
