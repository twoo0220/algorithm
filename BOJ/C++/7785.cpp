#include <iostream>
#include <string>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	std::map < std::string, int, std::greater<std::string>> workMap;
	for (int i = 0; i < count; ++i)
	{
		std::string name, status;
		std::cin >> name >> status;

		if (workMap.find(name) == workMap.end())
		{
			workMap.insert({ name, 0 });
		}
		else
		{
			workMap.erase(name);
		}
	}

	for (auto& iter : workMap)
	{
		std::cout << iter.first << "\n";
	}

	return 0;
}
