#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), size(0), start(0), end(-1);
	std::cin >> count;

	std::vector<int> que;
	que.reserve(count);
	
	for (int i = 0; i < count; ++i)
	{
		std::string order;
		std::cin >> order;

		if (order == "push")
		{
			int number = 0;
			std::cin >> number;
			que.push_back(number);
			size++;
			end++;
		}
		else if (order == "pop")
		{
			if (size > 0)
			{
				std::cout << que[start] << "\n";
				start++;
				size--;
			}
			else
			{
				std::cout << "-1\n";
			}
		}
		else if (order == "size")
		{
			std::cout << size << "\n";
		}
		else if (order == "empty")
		{
			if (size > 0)
			{
				std::cout << "0\n";
			}
			else
			{
				std::cout << "1\n";
			}
		}
		else if (order == "back")
		{
			if (size > 0)
			{
				std::cout << que[end] << "\n";
			}
			else
			{
				std::cout << "-1\n";
			}
		}
		else //if (order == "front")
		{
			if (size > 0)
			{
				std::cout << que[start] << "\n";
			}
			else
			{
				std::cout << "-1\n";
			}
		}
	}

	return 0;
}
