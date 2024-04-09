#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool cmp(std::pair<uint32_t, std::string> a, std::pair<uint32_t, std::string> b)
{
	return a.first < b.first ? true : false;
}

int main()
{
	uint32_t size = 0;
	std::cin >> size;

	std::vector<std::pair<uint32_t, std::string>> vec;
	vec.reserve(size);

	for (uint32_t i = 0; i < size; ++i)
	{
		uint32_t age = 0;
		std::string name;
		std::cin >> age >> name;
		
		vec.push_back(std::make_pair(age, name));
	}

	std::stable_sort(vec.begin(), vec.end(), cmp);

	for (uint32_t i = 0; i < size; ++i)
	{
		std::cout << vec[i].first << " " << vec[i].second << "\n";
	}

	return 0;
}
