#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string number;
	std::cin >> number;

	while ((number.length() % 3) != 0)
	{
		number.insert(0, 1, '0');
	}

	for (int i = 0; i < number.length(); i += 3)
	{
		int oct = (number[i] - 48) * 4 + (number[i + 1] - 48) * 2 + (number[i + 2] - 48);
		std::cout << oct;
	}

	return 0;
}
