#include <iostream>
#include <string>

int main()
{
	int count(0);
	std::cin >> count;

	int check(0);
	for (int i = 0; i < count; ++i)
	{
		std::string temp;
		std::cin >> temp;

		if (temp.size() > 2)
		{
			bool enable = true;
			for (int j = 2; j < temp.size(); ++j)
			{
				if (temp[j] != temp[j - 1])
				{
					for (int k = 0; k < j; ++k)
					{
						if (temp[j] == temp[k])
						{
							enable = false;
							break;
						}
					}
				}
			}

			if (enable == true)
			{
				check++;
			}
		}
		else
		{
			check++;
		}
	}
	std::cout << check;
	return 0;
}
