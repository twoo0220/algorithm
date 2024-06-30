#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	long long length = 0;
	std::cin >> count >> length;

	long long* tree = new long long[count] {};

	for (int i = 0; i < count; ++i)
	{
		std::cin >> tree[i];
	}

	std::sort(tree, tree + count);
	long long min(0), result(0);
	long long max = tree[count - 1];

	while (min <= max)
	{
		long long sum = 0;
		long long mid = (min + max) / 2;

		for (int i = 0; i < count; ++i)
		{
			if ((tree[i] - mid) > 0)
			{
				sum += tree[i] - mid;
			}
		}

		if (sum >= length)
		{
			min = mid + 1;
			result = mid;
		}
		else
		{
			max = mid - 1;
		}
	}

	std::cout << result;

	delete[] tree;
	tree = nullptr;

	return 0;
}
