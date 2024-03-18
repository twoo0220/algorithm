#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool cmp(std::string a, std::string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main()
{
	int size(0);
	std::cin >> size;
	
	std::vector<std::string> mVector;
	mVector.reserve(size);
	for (int i = 0; i < size; ++i)
	{
		std::string temp;
		std::cin >> temp;
		mVector.push_back(temp);
	}

	std::sort(mVector.begin(), mVector.end(), cmp);

	std::cout << mVector[0] << "\n";
	for (int i = 1; i < size; ++i)
	{
		if (mVector[i] != mVector[i - 1])
		{
			std::cout << mVector[i] << "\n";
		}
	}

	return 0;
}
