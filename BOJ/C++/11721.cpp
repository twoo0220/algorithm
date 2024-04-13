#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;

	uint32_t size = temp.size();
	std::string result;
	result += temp[0];
	for (uint32_t i = 1; i < size; ++i)
	{
		if ((i % 10) == 0)
		{
			std::cout << result << "\n";
			result = "";
			result += temp[i];
		}
		else
		{
			result += temp[i];
		}
	}
	std::cout << result;

	return 0;
}
