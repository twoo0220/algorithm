#include <iostream>
#include <vector>
#include <string>

// 그냥 queue를 씁시다...
int main()
{
	int size(0);
	std::cin >> size;

	std::vector<int> vecQueue;
	int last = 0;
	for (int i = 0; i < size; ++i)
	{
		std::string temp;
		std::cin >> temp;
		if (temp == "push")
		{
			int number(0);
			std::cin >> number;
			vecQueue.push_back(number);
			last++;
		}
		else if (temp == "front")
		{
			if (vecQueue.size() > 0)
			{
				std::cout << vecQueue[0] << '\n';
			}
			else
			{
				std::cout << -1 << '\n';
			}
		}
		else if (temp == "back")
		{
			if (vecQueue.size() > 0)
			{
				std::cout << vecQueue[last - 1] << '\n';
			}
			else
			{
				std::cout << -1 << '\n';
			}
		}
		else if (temp == "size")
		{
			std::cout << vecQueue.size() << '\n';
		}
		else if (temp == "pop")
		{
			if (vecQueue.size() > 0)
			{
				std::cout << vecQueue[0] << '\n';
				vecQueue.erase(vecQueue.begin());
				last--;
			}
			else
			{
				std::cout << -1 << '\n';
			}
		}
		else if (temp == "empty")
		{
			if (vecQueue.size() > 0)
			{
				std::cout << 0 << '\n';
			}
			else
			{
				std::cout << 1 << '\n';
			}
		}
	}
	
	return 0;
}
