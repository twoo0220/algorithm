#include <iostream>
#include <unordered_map>

int main()
{
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	std::ios::sync_with_stdio(false);
	std::unordered_map<int, bool> arr;

	int size(0);
	std::cin >> size;
	for (int i = 0; i < size; ++i)
	{
		int temp(0);
		std::cin >> temp;
		arr.insert(std::make_pair(temp, true));
	}

	std::cin >> size;
	for (int i = 0; i < size; ++i)
	{
		int temp(0);
		std::cin >> temp;
		std::cout << arr[temp] << '\n';
	}

	return 0;
}
