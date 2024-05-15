#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<unsigned int, unsigned int> a, std::pair<unsigned int, unsigned int> b)
{
	if (a.second < b.second)
	{
		return true;
	}

	if (a.second == b.second)
	{
		return (a.first < b.first);
	}

	return false;
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	std::vector<std::pair<unsigned int, unsigned int>> vec(size);
	for (int i = 0; i < size; ++i)
	{
		std::cin >> vec[i].first >> vec[i].second;
	}

	std::sort(vec.begin(), vec.end(), cmp);

	int result = 1;
	unsigned int temp = vec[0].second;

	for (int i = 1; i < size; ++i)
	{
		if (vec[i].first >= temp)
		{
			temp = vec[i].second;
			result++;
		}
	}

	std::cout << result;
	return 0;
}
