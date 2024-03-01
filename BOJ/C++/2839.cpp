#include <iostream>
#include <string>

int main()
{
	int size(0);
	std::cin >> size;

	if (size % 5 == 0)
	{
		std::cout << (size / 5);
	}
	else
	{
		int count(0);
		while (size > 0)
		{
			size -= 3;
			count++;
			if ((size % 5) == 0)
			{
				count += (size / 5);
				break;
			}
			else if ((size == 1) || (size == 2))
			{
				count = -1;
				break;
			}
			else if (size == 0)
			{
				break;
			}
		}

		std::cout << count;
	}

	return 0;
}
