#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0);
	std::cin >> count;

	std::vector<int> dequeVec;
	int size = 0;
	for (int i = 0; i < count; ++i)
	{
		std::string order;
		std::cin >> order;

		if ("push_front" == order)
		{
			int number(0);
			std::cin >> number;
			dequeVec.insert(dequeVec.begin(), number);
			size++;
		}
		else if ("push_back" == order)
		{
			int number(0);
			std::cin >> number;
			dequeVec.push_back(number);
			size++;
		}
		else if ("pop_front" == order)
		{
			if (size > 0)
			{
				std::cout << dequeVec[0] << "\n";
				dequeVec.erase(dequeVec.begin());
				size--;
			}
			else
			{
				std::cout << -1 << "\n";
			}
		}
		else if ("pop_back" == order)
		{
			if (size > 0)
			{
				std::cout << dequeVec[size - 1] << "\n";
				dequeVec.erase(dequeVec.end() - 1);
				size--;
			}
			else
			{
				std::cout << -1 << "\n";
			}
		}
		else if ("size" == order)
		{
			std::cout << size << "\n";
		}
		else if ("empty" == order)
		{
			if (size > 0)
			{
				std::cout << 0 << "\n";
			}
			else
			{
				std::cout << 1 << "\n";
			}
		}
		else if ("front" == order)
		{
			if (size > 0)
			{
				std::cout << dequeVec[0] << "\n";
			}
			else
			{
				std::cout << -1 << "\n";
			}
		}
		else //if ("back" == order)
		{
			if (size > 0)
			{
				std::cout << dequeVec[size - 1] << "\n";
			}
			else
			{
				std::cout << -1 << "\n";
			}
		}
	}

	return 0;
}
