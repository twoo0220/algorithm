#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;
	
	int index = 0;
	std::cin >> index;
	
	std::cout << temp[index - 1];

	return 0;
}