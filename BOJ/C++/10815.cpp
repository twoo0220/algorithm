#include <iostream>
#include <unordered_map>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;
	std::unordered_map<int, bool> card;

	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;
		card.insert({ number, true });
	}

	std::cin >> count;
	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;
		if (card.find(number) == card.end())
		{
			std::cout << "0 ";
		}
		else
		{
			std::cout << "1 ";
		}
	}

	return 0;
}
