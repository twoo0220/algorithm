#include <iostream>
#include <iomanip>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		double number = 0;
		std::cin >> number;

		while (true)
		{
			char ch;
			std::cin.get(ch);

			if (ch == '\n') break;
			if (ch == '@') number *= 3;
			if (ch == '%') number += 5;
			if (ch == '#') number -= 7;
		}

		std::cout << std::fixed;
		std::cout.precision(2);
		std::cout << number << "\n";
	}
	return 0;
}
