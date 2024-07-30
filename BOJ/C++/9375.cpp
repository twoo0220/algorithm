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

	for (int i = 0; i < count; ++i)
	{
		int size = 0;
		std::cin >> size;

		std::map<std::string, int> cloths;
		for (int j = 0; j < size; ++j)
		{
			std::string skip, item;
			std::cin >> skip >> item;

			cloths[item]++;
		}

		int result = 1;
		for (auto& iter : cloths)
		{
			result *= (iter.second + 1);
		}

		std::cout << --result << "\n";
	}

	return 0;
}
