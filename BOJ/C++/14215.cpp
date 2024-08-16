#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::vector<int> vec;
	vec.reserve(3);
	for (int i = 0; i < 3; ++i)
	{
		int number = 0;
		std::cin >> number;
		vec.push_back(number);
	}

	std::sort(vec.begin(), vec.end());

	if ((vec[0] + vec[1]) > vec[2])
	{
		std::cout << (vec[0] + vec[1] + vec[2]);
	}
	else
	{
		std::cout << ((vec[0] + vec[1]) * 2 - 1);
	}

	return 0;
}
