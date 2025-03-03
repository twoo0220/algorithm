#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string hey;
	std::cin >> hey;
	
	int stringLength = hey.length() - 1;
	std::cout << 'h';
	for (int i = 1; i < stringLength; ++i)
	{
		std::cout << "ee";
	}
	std::cout << 'y';
	return 0;
}
