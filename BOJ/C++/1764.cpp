#include <iostream>
#include <string>
#include <map>

int main()
{
	std::map<std::string, int> mList;
	int a(0), b(0);
	std::cin >> a >> b;

	for (int i = 0; i < a; ++i)
	{
		std::string temp;
		std::cin >> temp;
		mList.insert(std::make_pair(temp, 0));
	}

	std::map<std::string, int> copyList;
	for (int i = 0; i < b; ++i)
	{
		std::string temp;
		std::cin >> temp;
		if (mList.find(temp) != mList.end())
		{
			copyList.insert(std::make_pair(temp, 0));
		}
	}

	std::cout << copyList.size() << "\n";
	for (const auto& iter : copyList)
	{
		std::cout << iter.first << "\n";
	}

	return 0;
}
