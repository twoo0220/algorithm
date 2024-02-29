#include <iostream>
#include <string>

int main()
{
	int count = 0;
	std::cin >> count;
	int* stack = new int[count + 1] {};
	int topIndex = 0;
	int topValue = 0;

	for (int i = 0; i < count; ++i)
	{
		std::string command;
		std::cin >> command;
		if (command == "push")
		{
			int number(0);
			std::cin >> number;
			topIndex++;
			stack[topIndex] = number;
			topValue = number;
		}
		else if (command == "top")
		{
			if (topIndex > 0)
			{
				std::cout << topValue << "\n";
			}
			else
			{
				std::cout << "-1\n";
			}
		}
		else if (command == "size")
		{
			std::cout << topIndex << "\n";
		}
		else if (command == "pop")
		{
			if (topIndex > 0)
			{
				std::cout << topValue << "\n";
				--topIndex;
				topValue = stack[topIndex];
			}
			else
			{
				std::cout << "-1\n";
			}
		}
		else // if (command == "empty")
		{
			if (topIndex > 0)
			{
				std::cout << "0\n";
			}
			else
			{
				std::cout << "1\n";
			}
		}
	}

	delete[] stack;
	stack = nullptr;

	return 0;
}