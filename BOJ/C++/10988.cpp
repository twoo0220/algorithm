#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;

	bool result = true;
	int end = temp.size();
	for (int i = 0; i < end / 2; ++i)
	{
		if (temp[i] != temp[end - 1 - i])
		{
			result = false;
			break;
		}
	}

	std::cout << result;
	return 0;
}
