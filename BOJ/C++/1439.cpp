#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;

	int count0(0);
	int count1(0);

	if (temp[0] == '1')
	{
		count0++;
	}
	else
	{
		count1++;
	}

	for (int i = 0; i < temp.size() - 1; ++i)
	{
		if (temp[i] != temp[i + 1])
		{
			if (temp[i + 1] == '1')
			{
				count0++;
			}
			else
			{
				count1++;
			}
		}
	}

	std::cout << (count0 > count1 ? count1 : count0);
	return 0;
}
