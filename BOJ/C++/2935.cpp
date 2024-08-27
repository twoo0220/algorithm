#include <iostream>
#include <string>

void printZero(int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << '0';
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string a, b;
	char operate = 0;
	std::cin >> a >> operate >> b;

	int aSize = a.size() - 1;
	int bSize = b.size() - 1;

	if (operate == '+')
	{
		if (aSize == bSize)
		{
			std::cout << '2';
			printZero(aSize);
		}
		else
		{
			std::cout << '1';
			if (aSize > bSize)
			{
				printZero(aSize - bSize - 1);
				std::cout << '1';
				printZero(bSize);
			}
			else
			{
				printZero(bSize - aSize - 1);
				std::cout << '1';
				printZero(aSize);
			}
		}
	}
	else // (operate == '*')
	{
		std::cout << '1';
		printZero(aSize + bSize);
	}

	return 0;
}
