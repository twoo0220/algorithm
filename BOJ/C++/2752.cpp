#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<int> arr;
	for (int i = 0; i < 3; ++i)
	{
		int temp(0);
		std::cin >> temp;
		arr.push_back(temp);
	}

	std::sort(arr.begin(), arr.end());

	for (int i = 0; i < 3; ++i)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
