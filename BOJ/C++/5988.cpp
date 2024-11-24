#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::string number;
		std::cin >> number;
		int lastNumber = number[number.size() - 1] - 48;

		if (lastNumber % 2 == 0)
		{
			std::cout << "even\n";
		}
		else
		{
			std::cout << "odd\n";
		}
	}
	return 0;
}
