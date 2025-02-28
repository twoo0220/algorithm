#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;
	std::vector<int> vec(size);
	
	for (int i = 0; i < size; ++i)
	{
		std::cin >> vec[i];
	}

	std::sort(vec.begin(), vec.end());
	int maxWeight = vec[size - 1];

	for (int i = size - 1; i >= 0; --i)
	{
		int currentWeight = vec[i] * (size - i);
		if (maxWeight < currentWeight)
		{
			maxWeight = currentWeight;
		}
	}

	std::cout << maxWeight;
	return 0;
}
