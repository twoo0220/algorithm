#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	long long cluster(0), size(0);
	long long* arr = new long long[50] {};

	std::cin >> count;
	
	for (int i = 0; i < count; ++i)
	{
		std::cin >> arr[i];
	}

	std::cin >> cluster;

	for (int i = 0; i < count; ++i)
	{
		size += (arr[i] / cluster);
		if (arr[i] % cluster != 0)
		{
			size++;
		}
	}

	std::cout << cluster * size;
	delete[] arr;
	arr = nullptr;

	return 0;
}
