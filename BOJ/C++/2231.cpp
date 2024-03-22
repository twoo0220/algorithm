#include <iostream>

int main()
{
	int number(0);
	std::cin >> number;

	bool check = false;
	for (int i = 1; i < number; ++i)
	{
		int temp = i;
		int share = i;

		while (share > 0)
		{
			temp += share % 10;
			share /= 10;
		}

		if (temp == number)
		{
			std::cout << i;
			check = true;
			break;
		}
	}

	if (false == check)
	{
		std::cout << 0;
	}

	return 0;
}
