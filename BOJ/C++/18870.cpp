#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	std::vector<int> arr;
	std::vector<int> compareArr;
	arr.reserve(size);
	compareArr.reserve(size);

	for (int i = 0; i < size; ++i)
	{
		int number = 0;
		std::cin >> number;
		arr.push_back(number);
		compareArr.push_back(number);
	}

	std::sort(compareArr.begin(), compareArr.end());
	compareArr.erase(std::unique(compareArr.begin(), compareArr.end()), compareArr.end());

	for (int i = 0; i < size; ++i)
	{
		std::cout << std::lower_bound(compareArr.begin(), compareArr.end(), arr[i]) - compareArr.begin() << " ";
	}
	return 0;
}
