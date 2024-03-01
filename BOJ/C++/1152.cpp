#include <iostream>
#include <string>

int main()
{
	int count(0);
	std::string temp;
	std::getline(std::cin, temp);

	if (!temp.empty())
	{
		if (temp[0] != ' ')
		{
			count++;
		}

		for (int i = 0; i < temp.size() - 1; ++i)
		{
			if (temp[i] == ' ')
				count++;
		}
	}

	std::cout << count;
	return 0;
}
