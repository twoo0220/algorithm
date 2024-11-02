#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size;

	if (size == 0)
	{
		std::cout << 0;
		return 0;
	}
	
	std::vector<int> arr(size);
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}

	std::sort(arr.begin(), arr.end());
	int index = std::round(size * 0.15);
	double sum = 0;

	for (int i = index; i < size - index; ++i)
	{
		sum += arr[i];
	}

	int average = std::round(sum / (size - index * 2));
	std::cout << average;
	return 0;
}
