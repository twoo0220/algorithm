#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int count(0), result(1);
		std::cin >> count;
		std::pair<int, int>* arr = new std::pair<int, int>[count];

		for (int j = 0; j < count; ++j)
		{
			std::cin >> arr[j].first >> arr[j].second;
		}

		std::sort(arr, arr + count);

		int max = arr[0].second;
		for (int j = 1; j < count; ++j)
		{
			if (arr[j].second < max)
			{
				result++;
				max = arr[j].second;
			}
		}

		delete[] arr;
		arr = nullptr;

		std::cout << result << '\n';
	}
	return 0;
}
