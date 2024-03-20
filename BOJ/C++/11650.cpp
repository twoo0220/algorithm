#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int size(0);
	std::cin >> size;

	std::vector<std::pair<int, int>> mVector;
	mVector.reserve(size);

	for (int i = 0; i < size; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;
		mVector.push_back(std::make_pair(a, b));
	}

	std::sort(mVector.begin(), mVector.end());

	for (const auto& iter : mVector)
	{
		std::cout << iter.first << " " << iter.second << "\n";
	}

	return 0;
}
