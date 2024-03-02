#include <iostream>

int size = 0;
int checkNumber = 0;
int check[15]{};

void queen(int count)
{
	if (count == size)
	{
		checkNumber++;
	}
	else
	{
		for (int i = 0; i < size; ++i)
		{
			check[count] = i;
			bool enable = true;
			for (int j = 0; j < count; ++j)
			{
				if ((check[count] == check[j]) || ((count - j) == std::abs(check[count] - check[j])))
				{
					enable = false;
					break;
				}
			}
			if (enable == true)
			{
				queen(count + 1);
			}
		}
	}
}

int main()
{
	std::cin >> size;
	queen(0);
	std::cout << checkNumber;

	return 0;
}
