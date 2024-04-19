#include <iostream>
#include <algorithm>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int32_t size = 0;
	std::cin >> size;

	int32_t* arr = new int32_t[size]{};
	int32_t* count = new int32_t[8001]{};

	int32_t total = 0;
	for (int32_t i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
		total += arr[i];
		count[arr[i] + 4000]++;
	}

	std::sort(arr, arr + size);

	int32_t maxCount = 0;
	int32_t index = 0;
	for (int32_t i = 0; i < 8001; ++i)
	{
		if (count[i] > maxCount)
		{
			maxCount = count[i];
			index = i;
		}
	}

	for (int32_t i = index + 1; i < 8001; ++i)
	{
		if (maxCount == count[i])
		{
			index = i;
			break;
		}
	}

	int32_t ave = std::round(static_cast<double>(total) / static_cast<double>(size));
	std::cout << ave << "\n";
	std::cout << arr[(size - 1) / 2] << "\n";
	std::cout << (index - 4000) << "\n";
	std::cout << (arr[size - 1] - arr[0]) << "\n";

	delete[] arr;
	arr = nullptr;

	delete[] count;
	count = nullptr;
	return 0;
}
