#include <iostream>
#include <string>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count1(0), count2(0);
	std::cin >> count1 >> count2;

	std::map<std::string, int> collect;
	for (int i = 0; i < count1; ++i)
	{
		std::string temp;
		std::cin >> temp;

		collect.insert(std::pair<std::string, int>(temp, 1));
	}

	int result = 0;
	for (int i = 0; i < count2; ++i)
	{
		std::string temp;
		std::cin >> temp;

		if (collect.find(temp) != collect.end())
		{
			result++;
		}
	}
	std::cout << result;

	return 0;
}
