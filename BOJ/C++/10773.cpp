#include <iostream>
#include <vector>

int main()
{
	uint32_t size = 0;
	std::cin >> size;

	std::vector<uint32_t> vec;
	vec.reserve(size);

	for (uint32_t i = 0; i < size; ++i)
	{
		uint32_t temp = 0;
		std::cin >> temp;
		if (temp == 0)
		{
			vec.erase(vec.end() - 1);
		}
		else
		{
			vec.push_back(temp);
		}
	}

	size = 0;
	for (uint32_t i = 0; i < vec.size(); ++i)
	{
		size += vec[i];
	}
	std::cout << size;

	return 0;
}
