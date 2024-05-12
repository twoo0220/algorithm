#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(std::pair<int, int> a, std::pair<int, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}

	return a.second < b.second;
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	std::vector<std::pair<int, int>> vec(size);
	for (int i = 0; i < size; ++i)
	{
		std::cin >> vec[i].first >> vec[i].second;
	}

	std::sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < size; ++i)
	{
		std::cout << vec[i].first << " " << vec[i].second << "\n";
	}
	return 0;
}
