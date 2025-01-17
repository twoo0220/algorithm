#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int size = 0;
		std::cin >> size;
		std::vector<int> arr(size, 0);

		for (int j = 0; j < size; ++j)
		{
			std::cin >> arr[j];
		}

		std::sort(arr.begin(), arr.end());
		std::cout << (arr[size - 1] - arr[0]) * 2 << "\n";
	}

	return 0;
}
