#include <iostream>
#include <cmath>

int main()
{
	std::string temp;
	int number(0);
	std::cin >> temp >> number;

	int result(0);
	int end = temp.size();
	for (int i = end; i > 0; --i)
	{
		if (static_cast<int>(temp[i - 1]) > 64)
		{
			result += (static_cast<int>(temp[i - 1]) - 55) * pow(number, end - i);
		}
		else
		{
			result += (static_cast<int>(temp[i - 1]) - 48) * pow(number, end - i);
		}
	}
	std::cout << result;
	return 0;
}
