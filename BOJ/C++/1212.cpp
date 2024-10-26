#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string binary[8] = {
		"000", "001", "010", "011",
		"100", "101", "110", "111",
	};

	std::string octNumber;
	std::cin >> octNumber;

	for (int i = 0; i < octNumber.length(); ++i)
	{
		int temp = octNumber[i] - '0';
		if (i == 0)
		{
			std::cout << std::stoi(binary[temp]);
		}
		else
		{
			std::cout << binary[temp];
		}
	}

	return 0;
}
