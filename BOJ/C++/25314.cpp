#include <iostream>

int main()
{
	int count = 0;
	std::cin >> count;

	int share = count / 4 - 1;
	
	for (int i = 0; i < share; ++i)
	{
		std::cout << "long ";
	}
	std::cout << "long int";

	return 0;
}
