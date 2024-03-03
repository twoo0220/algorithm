#include <iostream>
#include <string>

int main()
{
	int count(0);
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::string temp;
		std::cin >> temp;
		std::cout << temp[0] << temp[temp.size() - 1] <<"\n";
	}

	return 0;
}
