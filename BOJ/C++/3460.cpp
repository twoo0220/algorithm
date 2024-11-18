#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;
	const unsigned char option1 = 1 << 0;

	for (int i = 0; i < count; ++i)
	{
		int number = 0;
		std::cin >> number;
		
		int flag = 0;
		while (number != 0)
		{
			if (number & (1 << 0))
			{
				std::cout << flag << " ";
			}
			number >>= 1;
			flag++;
		}
		std::cout << "\n";
	}
	return 0;
}
