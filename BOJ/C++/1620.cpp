#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::unordered_map<std::string, int> pocket;
	std::vector<std::string> vec(100000);

	int size(0), count(0);
	std::cin >> size >> count;

	for (int i = 0; i < size; ++i)
	{
		std::string name;
		std::cin >> name;
		pocket.insert({ name, i });
		vec[i] = name;
	}

	for (int i = 0; i < count; ++i)
	{
		std::string input;
		std::cin >> input;
		if ((input[0] >= '1') && (input[0] <= '9'))
		{
			std::cout << vec[std::stoi(input) - 1] << "\n";
		}
		else
		{
			std::cout << pocket[input] + 1 << "\n";
		}
	}

	return 0;
}
