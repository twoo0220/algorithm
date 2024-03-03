#include <iostream>
#include <string>

int main()
{
	while (true)
	{
		std::string temp;
		std::getline(std::cin, temp);
		if (temp == "")
		{
			break;
		}

		std::cout << temp << "\n";
	}
	return 0;
}
