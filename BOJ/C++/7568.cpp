#include <iostream>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	std::vector<std::pair<int, int>> vec(count);
	for (int i = 0; i < count; ++i)
	{
		std::cin >> vec[i].first >> vec[i].second;
	}

	for (int i = 0; i < count; ++i)
	{
		int result = 1;
		for (int j = 0; j < count; ++j)
		{
			if ((vec[i].first < vec[j].first) && (vec[i].second < vec[j].second))
			{
				result++;
			}
		}
		std::cout << result << " ";
	}

	return 0;
}
