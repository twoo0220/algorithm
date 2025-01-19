#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::unordered_map<int, bool> allmp;
	for (int i = 1; i <= 20; ++i)
	{
		allmp.insert({ i, true });
	}

	int count = 0;
	std::cin >> count;
	std::unordered_map<int, bool> mp;

	for (int i = 0; i < count; ++i)
	{
		std::string order;
		std::cin >> order;

		if (order == "all")
		{
			mp = allmp;
		}
		else if (order == "empty")
		{
			mp.clear();
		}
		else
		{
			int input = 0;
			std::cin >> input;

			if (order == "add")
			{
				if (mp.find(input) == mp.end())
				{
					mp.insert({ input, true });
				}
			}
			else if (order == "remove")
			{
				if (mp.find(input) != mp.end())
				{
					mp.erase(input);
				}
			}
			else if (order == "check")
			{
				if (mp.find(input) != mp.end())
				{
					std::cout << 1 << "\n";
				}
				else
				{
					std::cout << 0 << "\n";
				}
			}
			else //if (order == "toggle")
			{
				if (mp.find(input) != mp.end())
				{
					mp.erase(input);
				}
				else
				{
					mp.insert({ input, true });
				}
			}
		}
	}
	return 0;
}
